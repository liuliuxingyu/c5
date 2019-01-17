#include <stdio.h>
#include <math.h>

struct Point
{
    int x;
    int y;
};

int main()
{
    int index = 0;
    struct Point arr[100];

    printf("huanyingjinruzhuanchangweijinguanlixitong!\n");
    while (1)
    {
        printf("1---tianjiacheliangweizhi\n");
        printf("2---shanchucheliangweizhi\n");
        printf("3---xianshiquanbucheliangweizhi\n");
        printf("4---fanhuiliwoweideweizhizuijindecheliang\n");
        printf("5---tuichu\n");
        printf("qingxuanzexiangyinggongneng\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("qingshurucheliangweidexzuobiaoheyzuobiao:\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index++;
            printf("tianjiachenggong,dianjihuichejixu\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 2)
        {
            if (index > 0)
            {
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                char m;
                scanf("%c", &m);
                scanf("%c", &m);
            }
            else
            {
                printf("shanchushibai,dianjihuichejixu\n");
                char m;
                scanf("%c", &m);
                scanf("%c", &m);
            }
        }
        if (code == 3)
        {
            printf("suoyoucheliangweizhiruxia:\n");

            for (int i = 0; i < index; i++)
            {
                printf("di%dgecheliangdeweizhiwei(%d,%d)\n", i + 1, arr[i].x, arr[i].y);
            }
            printf("chakanchenggong,dianjihuichejixu\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 4)
        {
            printf("qingshurudangqianweizhizuobiao:\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&x);
            double min=100000;
            int carID=0;
            for(int i=0;i<index;i++){
                int dx=x-arr[i].x;
                int dy=y-arr[i].y;
                double l=sqrt(dx*dx+dy*dy);
                if(min>l){
                    min=l;
                    carID=i;
                }
            }
            printf("yonghudangqianweizhiyudi%dgechedejuliwei%lf,shizuixiaojuli\n",carID+1,min);
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 5)
        {
            printf("tuichuchengxu\n");
            break;
        }
    }

    return 0;
}