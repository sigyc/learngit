# -*- coding:utf-8 -*-
#程序用于计算sp得分


def compare(x,y):
    #具体比较函数,可自定义项更改
    if x==y:
        if x=='-':
            return 0            #   x=y='-''
        return 2                #   x=y!='-'
    else:
        if((x!='-')and(y!='-')):
            return -1           #   x!=y!='-'
        return -2               #   x or y='-'


def cal_score(col):
    #计算一列的得分
    sum = 0
    for i in range (N_L):
        for k in col[i:]:
        #  两两之间的得分 print(col[i],k,compare(col[i],k))
            sum += compare(col[i],k)
        sum -= 2
    print(sum)
    return sum


def sp_score(seq):
    global N_L
    global N_C
    N_L = len(seq)
    N_C = len(seq[0])
    #用于sp模型给序列比对打分
    sp=[]
    score=[]
    for i in range (N_C-1):
        s=[]
        for k in range (N_L):
            s.append(seq[k][i])
            #转换为列的矩阵
        sp.append(s)
    for j in range (N_C-1):
       #单独一列print(sp[j])
        score.append(cal_score(sp[j]))
    #返回各列score之和
    return sum(score)

seq = open("seq.txt").readlines()
print ("最终序列比对得分：",sp_score(seq))
    