yonghushuru = input("输入列表数字，每个元素用空格隔开: ")

#把字符串转化成可计算的数字
liebiao = [float(num) for num in yonghushuru.split()]

zonghe = sum(liebiao)

average = zonghe / len(liebiao)

print(f"平均值为: {average}")