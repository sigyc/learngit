# -*- coding:utf-8 -*-
#转化文件字符为大写

from sys import argv

script,filename = argv

print("We're going to change %r."% filename)
f1 =open(filename,'r')
lt = (f1.read()).upper()
f1.close()
f2 =open(filename,'w')
f2.write(lt)
f2.close