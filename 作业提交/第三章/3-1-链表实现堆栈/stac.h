//
// Created by 皮卡丘 on 2019/10/31.
//

#ifndef PIKA_STAC_HPP
#define PIKA_STAC_HPP

#include "link.cpp"
#define uint unsigned int
#define litp link<type>
#define sttp stac<type>
template <class type>
class stac {
public:
    uint lens;      //存储长度
    litp data;      //存储数据
         stac();    //构造空栈
         stac(type);//带参构造
    void push(type);//入栈操作
    type pops();    //出栈操作
    uint getl();    //获取长度
};

#endif //PIKA_STAC_HPP