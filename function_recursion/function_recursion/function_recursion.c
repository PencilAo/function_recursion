#define _CRT_SECURE_NO_WARNINGS
//�����ݹ�
// 
// 
//�ݹ����������:
//���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������
// 
// 
// 
//����1234 ��ӡ1234
//int main()
//{
//    unsigned int num = 0;
//    scanf("%u", &num);
//    while (num)
//    {
//        printf("%d", num % 10);
//        num /= 10;//num = num /10;
//    }
//    return 0;//��ӡ4321
//}
//void print(unsigned int x)
//{
//    if (x > 9)
//    {
//        print(x / 10);//������print��������printf
//    }
//    printf("%d", x % 10);                   //��x = 1234ʱ��һֱ����printֱ��xΪ1Ȼ���ӡ����ӡ����ع飬��ʱxΪ12��Ȼ��ִ��printf��ӡ2��Ȼ���ֻع飬xΪ123��ִ��printf��ӡ3����˷���������ǵݹ飬�ȴ��ݣ���ع�
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%u", &num);
//    print(num);
//    return 0;
//}