# 从键盘输入一个列表，列表元素之间用空格分隔
user_input = input("请输入一个列表（元素之间用空格分隔）: ")

# 使用 split 方法将输入的字符串分割成一个列表，并将每个元素转换为浮点数
number_list = [float(num) for num in user_input.split()]

# 计算列表元素的和
total_sum = sum(number_list)

# 计算平均值
average = total_sum / len(number_list)

# 输出平均值
print(f"列表元素的平均值为: {average}")