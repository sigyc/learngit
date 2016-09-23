# -*- coding:utf-8 -*-
# 输入中英文混合文件名ex.txt(asicc编码)作为第二参数，输出
#ex+.txt纯英文文件
# savec为保留中文行的标志
from sys import argv

script,filename = argv
savec = '+'

fs = open(filename,'r')
fd = open(filename.split('.')[0] + '+' +'.'+ 'txt','w')

for lines in fs.readlines(): 
    lines = lines.replace(' ','')
    if savec in lines:
        fd.write(lines.replace('+',''))
        continue
    for x in lines:
        if ord(x)<=127:
            fd.write(x)

fs.close()
fd.close()