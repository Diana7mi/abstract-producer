from django.views import View
from django.http import JsonResponse
from django.shortcuts import render
from django.views import View

from . import Web_Title, auto_abstract_norm, auto_abstract_long
from . import auto_abstract_short


# Create your views here.

class index(View):
    def get(self, request):
        return render(request, 'index.html')

    def post(self, request):
        data = request.POST
        text = data['textArea']
        text2 = "".join(text)
        text3 = str(auto_abstract_norm.auto_abstract_norm(text2))
        title1 = Web_Title.autotitle(text)
        title2 = Web_Title.autotitle(text3)
        response = JsonResponse({'title1': title1, 'title2': title2})
        return response


class ab_long(View):
    def get(self, request):
        return render(request, 'Abstract_long.html')

    def post(self, request):
        data = request.POST
        text = data['textArea']
        print(text)
        abstract3 = auto_abstract_long.auto_abstract_long(text)
        print(abstract3)
        response = JsonResponse({'abstract3': abstract3})
        return response


class ab_norm(View):
    def get(self, request):
        return render(request, 'Abstract_norm.html')

    def post(self, request):
        data = request.POST
        text = data['textArea']
        print(text)
        abstract1 = auto_abstract_norm.auto_abstract_norm(text)
        response = JsonResponse({'abstract1': abstract1})
        return response


class ab_short(View):
    def get(self, request):
        return render(request, 'Abstract_short.html')

    def post(self, request):
        data = request.POST
        text = data['textArea']
        print(text)
        abstract5 = auto_abstract_short.auto_abstract_short(text)
        response = JsonResponse({'abstract5': abstract5})
        return response


class historical_record(View):
    def get(self, request):
        return render(request, 'historical record.html')


class file_upload(View):
    def post(self, request):
        File = request.FILES.get("file", None)
        text = ''
        for chunk in File.chunks():
            text = text + chunk.decode('utf-8')
        title3 = Web_Title.autotitle(text)
        text2 = "".join(text)
        text3 = str(auto_abstract_norm.auto_abstract_norm(text2))
        title4 = Web_Title.autotitle(text3)
        # print(title)
        response = JsonResponse({'title3': title3, 'title4': title4})
        return response


class short_file_upload(View):
    def post(self, request):
        File = request.FILES.get("file", None)
        text = ''
        for chunk in File.chunks():
            text = text + chunk.decode('utf-8')
        abstract6 = auto_abstract_short.auto_abstract_short(text)
        print(abstract6)
        response = JsonResponse({'abstract6': abstract6})
        return response

class long_file_upload(View):
    def post(self, request):
        File = request.FILES.get("file", None)
        text = ''
        for chunk in File.chunks():
            text = text + chunk.decode('utf-8')
        abstract4 = auto_abstract_long.auto_abstract_long(text)
        print(abstract4)
        response = JsonResponse({'abstract4': abstract4})
        return response

class norm_file_upload(View):
    def post(self, request):
        File = request.FILES.get("file", None)
        text = ''
        for chunk in File.chunks():
            text = text + chunk.decode('utf-8')
        abstract2 = auto_abstract_norm.auto_abstract_norm(text)
        print(abstract2)
        response = JsonResponse({'abstract2': abstract2})
        return response