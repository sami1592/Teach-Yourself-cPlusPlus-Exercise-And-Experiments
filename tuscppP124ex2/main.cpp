#include <iostream>

using namespace std;

class squares{
    int num, sqr;
public:
    squares(int a, int b){
        num = a;
        sqr = b ;
    }
    void show(){
        cout << num << " " << sqr << endl ;
    }
};

int main()
{
    squares s[10] = { squares(1,1),squares(2,4),squares(3,9),squares(4,16),squares(5,25),
                    squares(6,36),squares(7,49),squares(8,64),squares(9,81),squares(10,100)};

    //squares s1(5,25);
    //squares s2 = square(5,25);
    for(int i=0;i<10;i++){
        s[i].show();
    }
    return 0;
}
