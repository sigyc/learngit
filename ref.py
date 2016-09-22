# -*- coding:utf-8 -*-
# 输入中英文混合文件名ex.txt作为第二参数，输出
#ex+.txt纯英文文件
from sys import argv

script,filename = argv

fs = open(filename,'r')
fd = open(filename.split('.')[0] + '+' +'.'+ 'txt','w')

for x in fs.read():
    if (ord(x)<=127):
        fd.write(x)

fs.close()
fd.close()