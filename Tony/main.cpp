//��������
//����Torry��Сϲ����ѧ��һ�죬��ʦ����������2��3��5��7����������������������TorryͻȻ�뵽һ�����⣬
//ǰ10��100��1000��10000�����������ĳ˻��Ƕ����أ�����������������ʦ����ʦ�ס�ˣ�һʱ�ش𲻳�����
//����Torry�����ڻ��̵��㣬�������ǰn�������ĳ˻������������ǵ���ŽӴ���̲��ã�TorryֻҪ����������ģ��50000��ֵ��
//�����ʽ
//����������һ��������n������n<=100000��
//�����ʽ
//�������һ�У���ǰn�������ĳ˻�ģ50000��ֵ��
//��������
//1
//
//�������
//
//
//2

//������prime number���ֳ������������޸�����������Ϊ�ڴ���1����Ȼ���У�����1�����������ⲻ������������������Ϊ������



#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, sum = 0, m;
    cin >> n;
    for(int i = 2; i <= n; i++){
        m = sqrt(i);
        int j;
        for(j = 2; j <= m+1; j++){
            if(i%j == 0){
                break;
            }
        }
        if(j > m) sum++;

    }
//    int sum = 0;
//    cin >> n;
//    Max = m*m + 2*m;
//    for(int i = 2; i <= n; i++){
//
//        if(i > Max){
//            m++;
//            Max = m*m + 2*m;
//        }
//        int j;
//        for(j = 2; j <= m+1; j++){
//            if(i%j == 0) break;
//        }
//        if(j > m){
//            sum++;
//        }
//
//    }

    cout << sum <<endl;
    return 0;
}