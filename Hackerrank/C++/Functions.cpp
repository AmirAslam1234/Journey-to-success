#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    if(a>b&&a>c&&a>d){
        return a;
    }
    else if(a<b&&b>c&&b>d){
        return b;
    }
    else if(c>a&&c>b&&c>d){
        return c;
    }
    else{
        return d;
    }
}


int main() {
    int a, b, c, d;
    return 0;
}
