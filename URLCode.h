#pragma once
#include <string>
using namespace std;
 
class CURLCode
{
public:
 CURLCode(){};
 virtual ~CURLCode(){};
 static string Encode(const char* lpszData);
 static string Decode(string inTmp);
private:
 inline static unsigned char toHex(const unsigned char &x){ return x > 9 ? x + 55: x + 48; }
 inline static unsigned char fromHex(const unsigned char &x){ return x > 64 ? x - 55 : x - 48; }
};