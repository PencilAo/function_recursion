#define _CRT_SECURE_NO_WARNINGS
//函数递归
// 
// 
//递归的限制条件:
//存在限制条件，当满足这个限制条件的时候，递归便不再继续
//每次递归调用之后越来越接近这个限制条件
// 
// 
// 
//输入1234 打印1234
//int main()
//{
//    unsigned int num = 0;
//    scanf("%u", &num);
//    while (num)
//    {
//        printf("%d", num % 10);
//        num /= 10;//num = num /10;
//    }
//    return 0;//打印4321
//}
//void print(unsigned int x)
//{
//    if (x > 9)
//    {
//        print(x / 10);//这里是print函数不是printf
//    }
//    printf("%d", x % 10);                   //当x = 1234时先一直进入print直到x为1然后打印，打印完后会回归，此时x为12，然后执行printf打印2，然后又回归，x为123，执行printf打印3，如此反复。这就是递归，先传递，后回归
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%u", &num);
//    print(num);
//    return 0;
//}