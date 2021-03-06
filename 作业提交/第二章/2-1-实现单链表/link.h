//         实现基本链表
// Created by 皮卡丘 on 2019/10/17.
//     任浩龙 2018141461344

#ifndef PIKA_LINK_HPP
#define PIKA_LINK_HPP

#define litp link<type>
#include <iostream>
template <class type>
class link
{
public:
    bool  head;     //判断开头
    type  data;     //存储数据
    litp* next;     //存储地址
    link();         //构造函数
    link(type);     //带参构造
    int  len();     //获取长度
    int  fid(type );//查找数据
    litp*fin(type );//查找数据
    litp*ats(int  );//寻址操作
    void set(litp*);//更改内容
	void set(type*);//更改内容
    litp add(type );//插入链表
    litp add(litp );//带参插入
    litp add();     //插入节点
    type pop();     //出队当前
    type get();     //获取当前
    void del();     //删除当前
    void dlf();     //截断链表
    litp operator[](int );//寻址操作
    litp operator= (litp);//赋值操作
    litp operator +(litp);//增加操作
};
#endif
