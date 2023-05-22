#include <iostream>
#include "encode.h"

// 使用命名空间
using namespace std;

int main(){
    string origin_url;
    string app_id;
    std::cout << "欢迎使用企业微信重定向链接生成工具\n请输入重定向链接\n";
    std::cin >> origin_url;
    std::cout << "请输入企业微信appId\n";
    std::cin >> app_id;

    string encoded_url = "https://open.weixin.qq.com/connect/oauth2/authorize?appid=" + app_id + "&redirect_uri=" + CURLCode::Encode(origin_url.c_str()) + "&response_type=code&scope=snsapi_base&state=STATE#wechat_redirect";
    cout << encoded_url;
    return 0;
}