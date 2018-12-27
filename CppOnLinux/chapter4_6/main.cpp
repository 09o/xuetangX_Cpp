#include <iostream>
using namespace std;

typedef enum { X, Y, Z } HANOI;

void PrintWelcomeInfo();
unsigned int GetInteger();
void MoveHanoi( unsigned int n, HANOI from, HANOI temp, HANOI to );
char ConvertHanoiToChar( HANOI x );
void MovePlate( unsigned int n, HANOI from, HANOI to );

int main()
{
    unsigned int n;
    PrintWelcomeInfo();
    n = GetInteger();
    MoveHanoi(n, X, Y, Z);
    return 0;
}

void PrintWelcomeInfo()
{
    cout << "The program shows the moving process of Hanoi Tower.\n";
}

/* 获取hanoi tower的层数 */
unsigned int GetInteger()
{
    unsigned int t;
    cout << "Input number of plates: ";
    cin >> t;
    return t;
}

/* 将枚举类型转换为字符形式 */
char ConvertHanoiToChar( HANOI x )
{
    switch( x ) {
        case X: return 'X';
        case Y: return 'Y';
        case Z: return 'Z';
        default: return '\0';
    }
}

/* 移动每一层的动作，n表示哪一层 */
void MovePlate( unsigned int n, HANOI from, HANOI to )
{
    char fc, tc;
    fc = ConvertHanoiToChar(from);
    tc = ConvertHanoiToChar(to);
    cout << n << ": " << fc << "-->" << tc << endl;
}


void MoveHanoi( unsigned int n, HANOI from, HANOI temp, HANOI to )
{
    if (n == 1)  // 圆盘只有一个时，只需将其从X塔移到Z塔
        MovePlate(n, from, to); //将编号为1的圆盘从X移到Z
    else {
        MoveHanoi(n-1, from, to, temp); // 递归，把X塔上编号1~n-1的圆盘移到 Y上，以 Z为辅助塔 
        MovePlate(n, from, to);    //把X塔上编号为n的圆盘移到Z上
        MoveHanoi(n-1, temp, from, to); //递归，把Y塔上编号1~n-1的圆盘移到Z上，以X为辅助塔
    }
}
