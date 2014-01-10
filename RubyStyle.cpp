#include <bits/stdc++.h>
using namespace std;

template <typename T>
class RubyStyle{
  T &a;
public:
  explicit RubyStyle(T &a):a(a){}
  
  template <typename F>
  RubyStyle &each(F f){
     std::for_each(begin(a), end(a), f);
     return *this;
  }
};

template <typename T>

#define $ RubyStyle

int main(){
  string a = "123456";
  $(a).each([](int k){cout << k << endl;});
}
