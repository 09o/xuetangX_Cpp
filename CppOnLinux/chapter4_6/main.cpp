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

/* ��ȡhanoi tower�Ĳ��� */
unsigned int GetInteger()
{
    unsigned int t;
    cout << "Input number of plates: ";
    cin >> t;
    return t;
}

/* ��ö������ת��Ϊ�ַ���ʽ */
char ConvertHanoiToChar( HANOI x )
{
    switch( x ) {
        case X: return 'X';
        case Y: return 'Y';
        case Z: return 'Z';
        default: return '\0';
    }
}

/* �ƶ�ÿһ��Ķ�����n��ʾ��һ�� */
void MovePlate( unsigned int n, HANOI from, HANOI to )
{
    char fc, tc;
    fc = ConvertHanoiToChar(from);
    tc = ConvertHanoiToChar(to);
    cout << n << ": " << fc << "-->" << tc << endl;
}


void MoveHanoi( unsigned int n, HANOI from, HANOI temp, HANOI to )
{
    if (n == 1)  // Բ��ֻ��һ��ʱ��ֻ�轫���X���Ƶ�Z��
        MovePlate(n, from, to); //�����Ϊ1��Բ�̴�X�Ƶ�Z
    else {
        MoveHanoi(n-1, from, to, temp); // �ݹ飬��X���ϱ��1~n-1��Բ���Ƶ� Y�ϣ��� ZΪ������ 
        MovePlate(n, from, to);    //��X���ϱ��Ϊn��Բ���Ƶ�Z��
        MoveHanoi(n-1, temp, from, to); //�ݹ飬��Y���ϱ��1~n-1��Բ���Ƶ�Z�ϣ���XΪ������
    }
}
