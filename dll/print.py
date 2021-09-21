# 开发时间：2021/2/18 19:55
print("hello")
print(3+1)
print(4)

# 打印到文件
fp=open('D:/text.txt', 'a+') # 不存在就创建，追加
print("hellworld", file=fp)
fp.close()

# 不换行输出
print("hello","world","hi")

#
user_name='Charlie'
user_age = 8
#同时输出多个变量和字符串
print("读者名：",user_name,"年龄：",user_age)
#同时输出多个变量和字符串，指定分隔符
print("读者名：" ,user_name,"年龄：",user_age,sep='|')

# 设置end 参数，指定输出之后不再换行
print(40,end="\t")
print(50,end="\t")
print(60,end="\t")

#
print (3+2+1-5+4%2-1/4+6)
print (3+2<5-7)
print (1+2,"hello,world")
print("." * 10)
print("Its fleece was white as {}.".format('snow'))