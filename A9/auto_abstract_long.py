import jiagu


def auto_abstract_long(text):
    # fin = open('./data/input.txt', 'r', encoding='utf-8')
    # text = fin.read()
    # fin.close()

    summarize = jiagu.summarize(text, 4)  # 摘要
    # print(summarize)
    return summarize
