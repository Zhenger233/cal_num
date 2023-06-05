#include <stdio.h>

int print_main73 = 0;

void one_yuanheng(int heng[9],int henghe[3],int*one);
void two_hengbu(int heng[9],int henghe[3],int*two);
void three_yuanshu(int shu[9],int shuhe[3],int*three);
void four_shubu(int shu[9],int shuhe[3],int*four);
void five_jiaochajia(int a1[2],int a2[2],int a3[2],int a4[2],int a5[2],int a6[2],int a7[2],int a8[2],int a9[2],int a10[2],int a11[2],int a12[2],int a13[2],int a14[2],int a15[2],int a16[2],int*seventeen);
void six_erfenjia(int a1[2],int a2[2],int a3[2],int a4[2],int a5[2],int a6[2],int a7[2],int a8[2],int a9[2],int a10[2],int a11[2],int a12[2],int a13[2],int a14[2],int a15[2],int a16[2],int*eighteen);
void seven_sihangfenjia(int a1[2],int a2[2],int a3[2],int a4[2],int a5[2],int a6[2],int a7[2],int a8[2],int a9[2],int a10[2],int a11[2],int a12[2],int a13[2],int a14[2],int a15[2],int a16[2],int*nineteen);
void eight_hengshujia(int a1[2],int a2[2],int a3[2],int a4[2],int a5[2],int a6[2],int a7[2],int a8[2],int a9[2],int a10[2],int a11[2],int a12[2],int a13[2],int a14[2],int a15[2],int a16[2],int*twenty);
void nine_sigejia(int a1[2],int a2[2],int a3[2],int a4[2],int*ans21);
void ten_luanjia1(int q8[2],int ans21[2],int ans22[2],int ans23[2],int ans24[2],int*ans25,int main73[7][3]);
void a11_luanjia2(int heng[9],int shu[9],int*ans26,int main73[7][3]);
void print1(int a);
void print2(int a);
void getmain73_new(int a, int b, int c, int main73[7][3]);

void getmain73_new(int a, int b, int c, int main73[7][3])
{
	int a1,a2,a3,b1,b2,b3,c1,c2,c3;
	int heng[9],shu[9],henghe[3],hengbu[3],shuhe[3],shubu[3];
	int hengheadd[3],hengbuadd[3],shuheadd[3],shubuadd[3];
	int newheng[9],newshu[9];
	int newhenghe[3],newhengbu[3],newshuhe[3],newshubu[3];
	int newhengheadd[3],newhengbuadd[3],newshuheadd[3],newshubuadd[3];
	long hengji,shuji;
	int one[2],two[2],three[2],four[2],five[2],six[2],seven[2],eight[2];
	int nine[2],ten[2],eleven[2],twelve[2],thirteen[2],fourteen[2],fifteen[2],sixteen[2];
	int seventeen[2],eighteen[2],nineteen[2],twenty[2],ans21[2],ans22[2],ans23[2],ans24[2],ans25[3],ans26[3];

	a1=a/100;
	a2=a%100/10;
	a3=a%10;
	b1=b/100;
	b2=b%100/10;
	b3=b%10;
	c1=c/100;
	c2=c%100/10;
	c3=c%10;
	heng[0]=a1;
	heng[1]=a2;
	heng[2]=a3;
	heng[3]=b1;
	heng[4]=b2;
	heng[5]=b3;
	heng[6]=c1;
	heng[7]=c2;
	heng[8]=c3;
	shu[0]=a1;
	shu[1]=b1;
	shu[2]=c1;
	shu[3]=a2;
	shu[4]=b2;
	shu[5]=c2;
	shu[6]=a3;
	shu[7]=b3;
	shu[8]=c3;
	henghe[0]=a1+a2+a3;
	henghe[1]=b1+b2+b3;
	henghe[2]=c1+c2+c3;
	hengbu[0]=27-henghe[0];
	hengbu[1]=27-henghe[1];
	hengbu[2]=27-henghe[2];
	shuhe[0]=a1+b1+c1;
	shuhe[1]=a2+b2+c2;
	shuhe[2]=a3+b3+c3;
	shubu[0]=27-shuhe[0];
	shubu[1]=27-shuhe[1];
	shubu[2]=27-shuhe[2];
	hengheadd[0]=a1+a2+a3+1;
	hengheadd[1]=b1+b2+b3+1;
	hengheadd[2]=c1+c2+c3+1;
	hengbuadd[0]=27-henghe[0]+1;
	hengbuadd[1]=27-henghe[1]+1;
	hengbuadd[2]=27-henghe[2]+1;
	shuheadd[0]=a1+b1+c1+1;
	shuheadd[1]=a2+b2+c2+1;
	shuheadd[2]=a3+b3+c3+1;
	shubuadd[0]=27-shuhe[0]+1;
	shubuadd[1]=27-shuhe[1]+1;
	shubuadd[2]=27-shuhe[2]+1;
	hengji=a*b*c;
	shuji=(a/100*100+b/100*10+c/100)*(a%100/10*100+b%100/10*10+c%100/10)*(a%10*100+b%10*10+c%10);
	newheng[0]=hengji/100000000;
	newheng[1]=hengji%100000000/10000000;
	newheng[2]=hengji%10000000/1000000;
	newheng[3]=hengji%1000000/100000;
	newheng[4]=hengji%100000/10000;
	newheng[5]=hengji%10000/1000;
	newheng[6]=hengji%1000/100;
	newheng[7]=hengji%100/10;
	newheng[8]=hengji%10;
	newshu[0]=shuji/100000000;
	newshu[1]=shuji%100000000/10000000;
	newshu[2]=shuji%10000000/1000000;
	newshu[3]=shuji%1000000/100000;
	newshu[4]=shuji%100000/10000;
	newshu[5]=shuji%10000/1000;
	newshu[6]=shuji%1000/100;
	newshu[7]=shuji%100/10;
	newshu[8]=shuji%10;
	newhenghe[0]=(newheng[0]+newheng[1]+newheng[2]);
	newhenghe[1]=(newheng[3]+newheng[4]+newheng[5]);
	newhenghe[2]=(newheng[6]+newheng[7]+newheng[8]);
	//if(print_main73){printf("%d %d %d\n",newhenghe[0],newhenghe[1],newhenghe[2]);}
	newshuhe[0]=(newshu[0]+newshu[1]+newshu[2]);
	newshuhe[1]=(newshu[3]+newshu[4]+newshu[5]);
	newshuhe[2]=(newshu[6]+newshu[7]+newshu[8]);
	newhengbu[0]=27-newhenghe[0];
	newhengbu[1]=27-newhenghe[1];
	newhengbu[2]=27-newhenghe[2];
	newshubu[0]=27-newshuhe[0];
	newshubu[1]=27-newshuhe[1];
	newshubu[2]=27-newshuhe[2];
	newhengheadd[0]=newhenghe[0]+1;
	newhengheadd[1]=newhenghe[1]+1;
	newhengheadd[2]=newhenghe[2]+1;
	newshuheadd[0]=newshuhe[0]+1;
	newshuheadd[1]=newshuhe[1]+1;
	newshuheadd[2]=newshuhe[2]+1;
	newhengbuadd[0]=newhengbu[0]+1;
	newhengbuadd[1]=newhengbu[1]+1;
	newhengbuadd[2]=newhengbu[2]+1;
	newshubuadd[0]=newshubu[0]+1;
	newshubuadd[1]=newshubu[1]+1;
	newshubuadd[2]=newshubu[2]+1;
	//if(print_main73){printf("%ld %ld\n",hengji,shuji);}
	if(print_main73){printf("             横      竖\n");} 
	if(print_main73){printf("第一部分        ");}
	one_yuanheng(heng,henghe,one);
	if(print_main73){printf("第二部分        ");}
	two_hengbu(heng,hengbu,two);
	if(print_main73){printf("第三部分        ");}
	three_yuanshu(shu,shuhe,three);
	if(print_main73){printf("第四部分        ");}
	four_shubu(shu,shubu,four);
	if(print_main73){printf("第五部分        ");}
	one_yuanheng(heng,hengheadd,five);
	if(print_main73){printf("第六部分        ");}
	two_hengbu(heng,hengbuadd,six);
	if(print_main73){printf("第七部分        ");}
	three_yuanshu(shu,shuheadd,seven);
	if(print_main73){printf("第八部分        ");}
	four_shubu(shu,shubuadd,eight);
	if(print_main73){printf("第九部分        ");}
	one_yuanheng(heng,newhenghe,nine);
	if(print_main73){printf("第十部分        ");}
	two_hengbu(heng,newhengbu,ten);
	if(print_main73){printf("第十一部分      ");}
	three_yuanshu(shu,newshuhe,eleven);
	if(print_main73){printf("第十二部分      ");}
	four_shubu(shu,newshubu,twelve);
	if(print_main73){printf("第十三部分      ");}
	one_yuanheng(heng,newhengheadd,thirteen);
	if(print_main73){printf("第十四部分      ");}
	two_hengbu(heng,newhengbuadd,fourteen);
	if(print_main73){printf("第十五部分      ");}
	three_yuanshu(shu,newshuheadd,fifteen);
	if(print_main73){printf("第十六部分      ");}
	four_shubu(shu,newshubuadd,sixteen);
	if(print_main73){printf("斜加            ");}
	five_jiaochajia(one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen,seventeen);
	if(print_main73){printf("前八加          ");}
	six_erfenjia(one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen,eighteen);
	if(print_main73){printf("前四加          ");}
	seven_sihangfenjia(one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen,nineteen);
	if(print_main73){printf("横竖加          ");}
	eight_hengshujia(one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen,twenty);
	if(print_main73){printf("1-4部分加和     ");}
	nine_sigejia(one,two,three,four,ans21);
	if(print_main73){printf("5-8部分加和     ");}
	nine_sigejia(five,six,seven,eight,ans22);
	if(print_main73){printf("9-12部分加和    ");} 
	nine_sigejia(nine,ten,eleven,twelve,ans23);
	if(print_main73){printf("13-16部分加和   ");}
	nine_sigejia(thirteen,fourteen,fifteen,sixteen,ans24);
	if(print_main73){printf("\n复杂计算1加和   ");}
	ten_luanjia1(eighteen,ans21,ans22,ans23,ans24,ans25,main73);
	if(print_main73){printf("\n复杂计算2加和   ");}
	a11_luanjia2(heng,shu,ans26,main73);
	if(print_main73){printf("退出请输入0,继续请输入1\n");}
	// scanf("%d",&qqq);
}

void one_yuanheng(int heng[9],int henghe[3],int*one)
{
	int x,y,z,i,j,k;
	int newheng[9],newshu[9],newheng1[3],newshu1[3],heng1[3],shu1[3];
	int jia[9];
	long int hengji,shuji;
	//for(i=0;i<3;i++)
		//if(print_main73){printf("%d ",henghe[i]);}
	for(i=0;i<3;i++)
	{
		k=0;
		for(j=(henghe[i]+8)%9;j<9;j++)
		{
			newheng[k++]=heng[j];
			//if(print_main73){printf("%d ",newheng[k-1]);}
		}
		for(j=0;j<((henghe[i]+8)%9);j++)
		{
			newheng[k++]=heng[j];
			//if(print_main73){printf("%d ",newheng[k-1]);}
		}
		newheng1[0]=100*newheng[0]+10*newheng[1]+newheng[2];
		newheng1[1]=100*newheng[3]+10*newheng[4]+newheng[5];
		newheng1[2]=100*newheng[6]+10*newheng[7]+newheng[8];
		newshu1[0]=100*newheng[0]+10*newheng[3]+newheng[6];
		newshu1[1]=100*newheng[1]+10*newheng[4]+newheng[7];
		newshu1[2]=100*newheng[2]+10*newheng[5]+newheng[8];
		hengji=newheng1[0]*newheng1[1]*newheng1[2];
		newheng[0]=hengji/100000000;
		newheng[1]=hengji%100000000/10000000;
		newheng[2]=hengji%10000000/1000000;
		newheng[3]=hengji%1000000/100000;
		newheng[4]=hengji%100000/10000;
		newheng[5]=hengji%10000/1000;
		newheng[6]=hengji%1000/100;
		newheng[7]=hengji%100/10;
		newheng[8]=hengji%10;
		//for(i=0;i<9;i++)
			//if(print_main73){printf("%d ",newheng[i]);}
		newheng1[0]=(newheng[0]+newheng[1]+newheng[2])%10;
		newheng1[1]=(newheng[3]+newheng[4]+newheng[5])%10;
		newheng1[2]=(newheng[6]+newheng[7]+newheng[8])%10;
		heng1[i]=100*newheng1[0]+10*newheng1[1]+newheng1[2];
		shuji=newshu1[0]*newshu1[1]*newshu1[2];
		//if(print_main73){printf("%ld\n",shuji);}
		newshu[0]=shuji/100000000;
		newshu[1]=shuji%100000000/10000000;
		newshu[2]=shuji%10000000/1000000;
		newshu[3]=shuji%1000000/100000;
		newshu[4]=shuji%100000/10000;
		newshu[5]=shuji%10000/1000;
		newshu[6]=shuji%1000/100;
		newshu[7]=shuji%100/10;
		newshu[8]=shuji%10;
		newshu1[0]=(newshu[0]+newshu[1]+newshu[2])%10;
		newshu1[1]=(newshu[3]+newshu[4]+newshu[5])%10;
		newshu1[2]=(newshu[6]+newshu[7]+newshu[8])%10;
		shu1[i]=100*newshu1[0]+10*newshu1[1]+newshu1[2];
	}
	jia[0]=heng1[0]/100;
	jia[1]=heng1[0]%100/10;
	jia[2]=heng1[0]%10;
	jia[3]=heng1[1]/100;
	jia[4]=heng1[1]%100/10;
	jia[5]=heng1[1]%10;
	jia[6]=heng1[2]/100;
	jia[7]=heng1[2]%100/10;
	jia[8]=heng1[2]%10;
	//for(i=0;i<9;i++)
		//if(print_main73){printf("%d ",jia[i]);}
	one[0]=((jia[0]+jia[3]+jia[6])%10)*100+((jia[1]+jia[4]+jia[7])%10)*10+((jia[2]+jia[5]+jia[8])%10);
	print1(one[0]);
	jia[0]=shu1[0]/100;
	jia[1]=shu1[0]%100/10;
	jia[2]=shu1[0]%10;
	jia[3]=shu1[1]/100;
	jia[4]=shu1[1]%100/10;
	jia[5]=shu1[1]%10;
	jia[6]=shu1[2]/100;
	jia[7]=shu1[2]%100/10;
	jia[8]=shu1[2]%10;
	one[1]=((jia[0]+jia[3]+jia[6])%10)*100+((jia[1]+jia[4]+jia[7])%10)*10+((jia[2]+jia[5]+jia[8])%10);
	print2(one[1]);
}

void two_hengbu(int heng[9],int hengbu[3],int*two)
{
	int x,y,z,i,j,k;
	int newheng[9],newshu[9],newheng1[3],newshu1[3],heng1[3],shu1[3];
	int jia[9];
	long int hengji,shuji;
	//for(i=0;i<3;i++)
	//	if(print_main73){printf("%d ",hengbu[i]);}
	for(i=0;i<3;i++)
	{
		k=0;
		for(j=(hengbu[i]+8)%9;j<9;j++)
		{
			newheng[k++]=heng[j];
			//if(print_main73){printf("%d ",newheng[k-1]);}
		}
		for(j=0;j<((hengbu[i]+8)%9);j++)
		{
			newheng[k++]=heng[j];
			//if(print_main73){printf("%d ",newheng[k-1]);}
		}
		newheng1[0]=100*newheng[0]+10*newheng[1]+newheng[2];
		newheng1[1]=100*newheng[3]+10*newheng[4]+newheng[5];
		newheng1[2]=100*newheng[6]+10*newheng[7]+newheng[8];
		newshu1[0]=100*newheng[0]+10*newheng[3]+newheng[6];
		newshu1[1]=100*newheng[1]+10*newheng[4]+newheng[7];
		newshu1[2]=100*newheng[2]+10*newheng[5]+newheng[8];
		hengji=newheng1[0]*newheng1[1]*newheng1[2];
		newheng[0]=hengji/100000000;
		newheng[1]=hengji%100000000/10000000;
		newheng[2]=hengji%10000000/1000000;
		newheng[3]=hengji%1000000/100000;
		newheng[4]=hengji%100000/10000;
		newheng[5]=hengji%10000/1000;
		newheng[6]=hengji%1000/100;
		newheng[7]=hengji%100/10;
		newheng[8]=hengji%10;
		newheng1[0]=(newheng[0]+newheng[1]+newheng[2])%10;
		newheng1[1]=(newheng[3]+newheng[4]+newheng[5])%10;
		newheng1[2]=(newheng[6]+newheng[7]+newheng[8])%10;
		heng1[i]=100*newheng1[0]+10*newheng1[1]+newheng1[2];
		shuji=newshu1[0]*newshu1[1]*newshu1[2];
		//if(print_main73){printf("%ld\n",shuji);}
		newshu[0]=shuji/100000000;
		newshu[1]=shuji%100000000/10000000;
		newshu[2]=shuji%10000000/1000000;
		newshu[3]=shuji%1000000/100000;
		newshu[4]=shuji%100000/10000;
		newshu[5]=shuji%10000/1000;
		newshu[6]=shuji%1000/100;
		newshu[7]=shuji%100/10;
		newshu[8]=shuji%10;
		newshu1[0]=(newshu[0]+newshu[1]+newshu[2])%10;
		newshu1[1]=(newshu[3]+newshu[4]+newshu[5])%10;
		newshu1[2]=(newshu[6]+newshu[7]+newshu[8])%10;
		shu1[i]=100*newshu1[0]+10*newshu1[1]+newshu1[2];
	}
	jia[0]=heng1[0]/100;
	jia[1]=heng1[0]%100/10;
	jia[2]=heng1[0]%10;
	jia[3]=heng1[1]/100;
	jia[4]=heng1[1]%100/10;
	jia[5]=heng1[1]%10;
	jia[6]=heng1[2]/100;
	jia[7]=heng1[2]%100/10;
	jia[8]=heng1[2]%10;
	//for(i=0;i<9;i++)
	//	if(print_main73){printf("%d ",jia[i]);}
	two[0]=((jia[0]+jia[3]+jia[6])%10)*100+((jia[1]+jia[4]+jia[7])%10)*10+((jia[2]+jia[5]+jia[8])%10);
	print1(two[0]);
	jia[0]=shu1[0]/100;
	jia[1]=shu1[0]%100/10;
	jia[2]=shu1[0]%10;
	jia[3]=shu1[1]/100;
	jia[4]=shu1[1]%100/10;
	jia[5]=shu1[1]%10;
	jia[6]=shu1[2]/100;
	jia[7]=shu1[2]%100/10;
	jia[8]=shu1[2]%10;
	two[1]=((jia[0]+jia[3]+jia[6])%10)*100+((jia[1]+jia[4]+jia[7])%10)*10+((jia[2]+jia[5]+jia[8])%10);
	print2(two[1]); 
}

void three_yuanshu(int shu[9],int shuhe[3],int*three)
{
	int x,y,z,i,j,k;
	int newheng[9],newshu[9],newheng1[3],newshu1[3],heng1[3],shu1[3];
	int jia[9];
	long int hengji,shuji;
	//for(i=0;i<9;i++)
	//	if(print_main73){printf("%d ",shu[i]);}
	//if(print_main73){printf("\n");}
	for(i=0;i<3;i++)
	{
		k=0;
		for(j=(shuhe[i]+8)%9;j<9;j++)
		{
			newshu[k++]=shu[j];
			//if(print_main73){printf("%d ",shu[j]);}
			//if(print_main73){printf("%d ",newshu[k-1]);}
		}
		for(j=0;j<((shuhe[i]+8)%9);j++)
		{
			newshu[k++]=shu[j];
			//if(print_main73){printf("%d ",shu[j]);}
			//if(print_main73){printf("%d ",newheng[k-1]);}
		}
		//for(i=0;i<9;i++)
		//	if(print_main73){printf("%d ",newshu[i]);}
		newheng1[0]=100*newshu[0]+10*newshu[3]+newshu[6];
		newheng1[1]=100*newshu[1]+10*newshu[4]+newshu[7];
		newheng1[2]=100*newshu[2]+10*newshu[5]+newshu[8];
		newshu1[0]=100*newshu[0]+10*newshu[1]+newshu[2];
		newshu1[1]=100*newshu[3]+10*newshu[4]+newshu[5];
		newshu1[2]=100*newshu[6]+10*newshu[7]+newshu[8];
		hengji=newheng1[0]*newheng1[1]*newheng1[2];
		//if(print_main73){printf("%ld\n",hengji);}
		//if(print_main73){printf("%ld %ld %ld\n",newheng1[0],newheng1[1],newheng1[2]);}
		newheng[0]=hengji/100000000;
		newheng[1]=hengji%100000000/10000000;
		newheng[2]=hengji%10000000/1000000;
		newheng[3]=hengji%1000000/100000;
		newheng[4]=hengji%100000/10000;
		newheng[5]=hengji%10000/1000;
		newheng[6]=hengji%1000/100;
		newheng[7]=hengji%100/10;
		newheng[8]=hengji%10;
		newheng1[0]=(newheng[0]+newheng[1]+newheng[2])%10;
		newheng1[1]=(newheng[3]+newheng[4]+newheng[5])%10;
		newheng1[2]=(newheng[6]+newheng[7]+newheng[8])%10;
		heng1[i]=100*newheng1[0]+10*newheng1[1]+newheng1[2];
		shuji=newshu1[0]*newshu1[1]*newshu1[2];
		//if(print_main73){printf("%ld\n",shuji);}
		newshu[0]=shuji/100000000;
		newshu[1]=shuji%100000000/10000000;
		newshu[2]=shuji%10000000/1000000;
		newshu[3]=shuji%1000000/100000;
		newshu[4]=shuji%100000/10000;
		newshu[5]=shuji%10000/1000;
		newshu[6]=shuji%1000/100;
		newshu[7]=shuji%100/10;
		newshu[8]=shuji%10;
		newshu1[0]=(newshu[0]+newshu[1]+newshu[2])%10;
		newshu1[1]=(newshu[3]+newshu[4]+newshu[5])%10;
		newshu1[2]=(newshu[6]+newshu[7]+newshu[8])%10;
		shu1[i]=100*newshu1[0]+10*newshu1[1]+newshu1[2];
	}
	jia[0]=heng1[0]/100;
	jia[1]=heng1[0]%100/10;
	jia[2]=heng1[0]%10;
	jia[3]=heng1[1]/100;
	jia[4]=heng1[1]%100/10;
	jia[5]=heng1[1]%10;
	jia[6]=heng1[2]/100;
	jia[7]=heng1[2]%100/10;
	jia[8]=heng1[2]%10;
	//for(i=0;i<9;i++)
	//	if(print_main73){printf("%d ",jia[i]);}
	three[0]=((jia[0]+jia[3]+jia[6])%10)*100+((jia[1]+jia[4]+jia[7])%10)*10+((jia[2]+jia[5]+jia[8])%10);
	print1(three[0]);
	jia[0]=shu1[0]/100;
	jia[1]=shu1[0]%100/10;
	jia[2]=shu1[0]%10;
	jia[3]=shu1[1]/100;
	jia[4]=shu1[1]%100/10;
	jia[5]=shu1[1]%10;
	jia[6]=shu1[2]/100;
	jia[7]=shu1[2]%100/10;
	jia[8]=shu1[2]%10;
	three[1]=((jia[0]+jia[3]+jia[6])%10)*100+((jia[1]+jia[4]+jia[7])%10)*10+((jia[2]+jia[5]+jia[8])%10);
	print2(three[1]);
}

void four_shubu(int shu[9],int shubu[3],int*four)
{
	int x,y,z,i,j,k;
	int newheng[9],newshu[9],newheng1[3],newshu1[3],heng1[3],shu1[3];
	int jia[9],shuhebu[3];
	long int hengji,shuji;
	//for(i=0;i<9;i++)
	//	if(print_main73){printf("%d ",shu[i]);}
	//if(print_main73){printf("\n");}
	for(i=0;i<3;i++)
	{
		k=0;
		for(j=(shubu[i]+8)%9;j<9;j++)
		{
			newshu[k++]=shu[j];
			//if(print_main73){printf("%d ",shu[-1]);}
			//if(print_main73){printf("%d ",newshu[k-1]);}
		}
		for(j=0;j<((shubu[i]+8)%9);j++)
		{
			newshu[k++]=shu[j];
			//if(print_main73){printf("%d ",shu[j]);}
			//if(print_main73){printf("%d ",newheng[k-1]);}
		}
		//for(i=0;i<9;i++)
		//	if(print_main73){printf("%d ",newshu[i]);}
		newheng1[0]=100*newshu[0]+10*newshu[3]+newshu[6];
		newheng1[1]=100*newshu[1]+10*newshu[4]+newshu[7];
		newheng1[2]=100*newshu[2]+10*newshu[5]+newshu[8];
		newshu1[0]=100*newshu[0]+10*newshu[1]+newshu[2];
		newshu1[1]=100*newshu[3]+10*newshu[4]+newshu[5];
		newshu1[2]=100*newshu[6]+10*newshu[7]+newshu[8];
		hengji=newheng1[0]*newheng1[1]*newheng1[2];
		//if(print_main73){printf("%ld\n",hengji);}
		//if(print_main73){printf("%ld %ld %ld\n",newheng1[0],newheng1[1],newheng1[2]);}
		newheng[0]=hengji/100000000;
		newheng[1]=hengji%100000000/10000000;
		newheng[2]=hengji%10000000/1000000;
		newheng[3]=hengji%1000000/100000;
		newheng[4]=hengji%100000/10000;
		newheng[5]=hengji%10000/1000;
		newheng[6]=hengji%1000/100;
		newheng[7]=hengji%100/10;
		newheng[8]=hengji%10;
		newheng1[0]=(newheng[0]+newheng[1]+newheng[2])%10;
		newheng1[1]=(newheng[3]+newheng[4]+newheng[5])%10;
		newheng1[2]=(newheng[6]+newheng[7]+newheng[8])%10;
		heng1[i]=100*newheng1[0]+10*newheng1[1]+newheng1[2];
		shuji=newshu1[0]*newshu1[1]*newshu1[2];
		//if(print_main73){printf("%ld\n",shuji);}
		//if(print_main73){printf("%ld %ld %ld\n",newshu1[0],newshu1[1],newshu1[2]);}
		newshu[0]=shuji/100000000;
		newshu[1]=shuji%100000000/10000000;
		newshu[2]=shuji%10000000/1000000;
		newshu[3]=shuji%1000000/100000;
		newshu[4]=shuji%100000/10000;
		newshu[5]=shuji%10000/1000;
		newshu[6]=shuji%1000/100;
		newshu[7]=shuji%100/10;
		newshu[8]=shuji%10;
		newshu1[0]=(newshu[0]+newshu[1]+newshu[2])%10;
		newshu1[1]=(newshu[3]+newshu[4]+newshu[5])%10;
		newshu1[2]=(newshu[6]+newshu[7]+newshu[8])%10;
		shu1[i]=100*newshu1[0]+10*newshu1[1]+newshu1[2];
	}
	jia[0]=heng1[0]/100;
	jia[1]=heng1[0]%100/10;
	jia[2]=heng1[0]%10;
	jia[3]=heng1[1]/100;
	jia[4]=heng1[1]%100/10;
	jia[5]=heng1[1]%10;
	jia[6]=heng1[2]/100;
	jia[7]=heng1[2]%100/10;
	jia[8]=heng1[2]%10;
	//for(i=0;i<9;i++)
	//	if(print_main73){printf("%d ",jia[i]);}
	four[0]=((jia[0]+jia[3]+jia[6])%10)*100+((jia[1]+jia[4]+jia[7])%10)*10+((jia[2]+jia[5]+jia[8])%10);
	print1(four[0]);
	jia[0]=shu1[0]/100;
	jia[1]=shu1[0]%100/10;
	jia[2]=shu1[0]%10;
	jia[3]=shu1[1]/100;
	jia[4]=shu1[1]%100/10;
	jia[5]=shu1[1]%10;
	jia[6]=shu1[2]/100;
	jia[7]=shu1[2]%100/10;
	jia[8]=shu1[2]%10;
	four[1]=((jia[0]+jia[3]+jia[6])%10)*100+((jia[1]+jia[4]+jia[7])%10)*10+((jia[2]+jia[5]+jia[8])%10);
	print2(four[1]);
}

void five_jiaochajia(int a1[2],int a2[2],int a3[2],int a4[2],int a5[2],int a6[2],int a7[2],int a8[2],int a9[2],int a10[2],int a11[2],int a12[2],int a13[2],int a14[2],int a15[2],int a16[2],int*seventeen)
{
	int ge,shi,bai,i,xianheng[16],xianshu[16];
	xianheng[0]=a1[0];
	xianshu[0]=a1[1];
	xianheng[1]=a2[1];
	xianshu[1]=a2[0];
	xianheng[2]=a3[0];
	xianshu[2]=a3[1];
	xianheng[3]=a4[1];
	xianshu[3]=a4[0];
	xianheng[4]=a5[0];
	xianshu[4]=a5[1];
	xianheng[5]=a6[1];
	xianshu[5]=a6[0];
	xianheng[6]=a7[0];
	xianshu[6]=a7[1];
	xianheng[7]=a8[1];
	xianshu[7]=a8[0];
	xianheng[8]=a9[0];
	xianshu[8]=a9[1];
	xianheng[9]=a10[1];
	xianshu[9]=a10[0];
	xianheng[10]=a11[0];
	xianshu[10]=a11[1];
	xianheng[11]=a12[1];
	xianshu[11]=a12[0];
	xianheng[12]=a13[0];
	xianshu[12]=a13[1];
	xianheng[13]=a14[1];
	xianshu[13]=a14[0];
	xianheng[14]=a15[0];
	xianshu[14]=a15[1];
	xianheng[15]=a16[1];
	xianshu[15]=a16[0];
	ge=0;
	for(i=0;i<16;i++)
	{
		ge+=xianshu[i]%10;
		//if(print_main73){printf("%d ",xianshu[i]%10);}
	}
	ge=ge%10;
	shi=0;
	for(i=0;i<16;i++)
	{
		shi+=xianshu[i]%100/10;
	}
	shi=shi%10;
	bai=0;
	for(i=0;i<16;i++)
	{
		bai+=xianshu[i]/100;
	}
	bai=bai%10;
	seventeen[0]=100*bai+10*shi+ge;
	print1(seventeen[0]);
	ge=0;
	for(i=0;i<16;i++)
	{
		ge+=xianheng[i]%10;
	}
	ge=ge%10;
	shi=0;
	for(i=0;i<16;i++)
	{
		shi+=xianheng[i]%100/10;
	}
	shi=shi%10;
	bai=0;
	for(i=0;i<16;i++)
	{
		bai+=xianheng[i]/100;
	}
	bai=bai%10;
	seventeen[1]=100*bai+10*shi+ge;
	print2(seventeen[1]);
}

void six_erfenjia(int a1[2],int a2[2],int a3[2],int a4[2],int a5[2],int a6[2],int a7[2],int a8[2],int a9[2],int a10[2],int a11[2],int a12[2],int a13[2],int a14[2],int a15[2],int a16[2],int*eighteen)
{
	int ge,shi,bai,i,xianshang[16],xianxia[16];
	xianshang[0]=a1[0];
	xianshang[1]=a1[1];
	xianshang[2]=a2[0];
	xianshang[3]=a2[1];
	xianshang[4]=a3[0];
	xianshang[5]=a3[1];
	xianshang[6]=a4[0];
	xianshang[7]=a4[1];
	xianshang[8]=a5[0];
	xianshang[9]=a5[1];
	xianshang[10]=a6[0];
	xianshang[11]=a6[1];
	xianshang[12]=a7[0];
	xianshang[13]=a7[1];
	xianshang[14]=a8[0];
	xianshang[15]=a8[1];
	xianxia[0]=a9[0];
	xianxia[1]=a9[1];
	xianxia[2]=a10[0];
	xianxia[3]=a10[1];
	xianxia[4]=a11[0];
	xianxia[5]=a11[1];
	xianxia[6]=a12[0];
	xianxia[7]=a12[1];
	xianxia[8]=a13[0];
	xianxia[9]=a13[1];
	xianxia[10]=a14[0];
	xianxia[11]=a14[1];
	xianxia[12]=a15[0];
	xianxia[13]=a15[1];
	xianxia[14]=a16[0];
	xianxia[15]=a16[1];
	ge=0;
	for(i=0;i<16;i++)
	{
		ge+=xianshang[i]%10;
		//if(print_main73){printf("%d ",xianshu[i]%10);}
	}
	ge=ge%10;
	shi=0;
	for(i=0;i<16;i++)
	{
		shi+=xianshang[i]%100/10;
	}
	shi=shi%10;
	bai=0;
	for(i=0;i<16;i++)
	{
		bai+=xianshang[i]/100;
	}
	bai=bai%10;
	eighteen[0]=100*bai+10*shi+ge;
	print1(eighteen[0]);
	ge=0;
	for(i=0;i<16;i++)
	{
		ge+=xianxia[i]%10;
	}
	ge=ge%10;
	shi=0;
	for(i=0;i<16;i++)
	{
		shi+=xianxia[i]%100/10;
	}
	shi=shi%10;
	bai=0;
	for(i=0;i<16;i++)
	{
		bai+=xianxia[i]/100;
	}
	bai=bai%10;
	eighteen[1]=100*bai+10*shi+ge;
	print2(eighteen[1]);
}

void seven_sihangfenjia(int a1[2],int a2[2],int a3[2],int a4[2],int a5[2],int a6[2],int a7[2],int a8[2],int a9[2],int a10[2],int a11[2],int a12[2],int a13[2],int a14[2],int a15[2],int a16[2],int*nineteen)
{
	int ge,shi,bai,i,xianheng[16],xianshu[16];
	xianheng[0]=a1[0];
	xianheng[1]=a2[0];
	xianheng[2]=a3[0];
	xianheng[3]=a4[0];
	xianheng[4]=a5[1];
	xianheng[5]=a6[1];
	xianheng[6]=a7[1];
	xianheng[7]=a8[1];
	xianheng[8]=a9[0];
	xianheng[9]=a10[0];
	xianheng[10]=a11[0];
	xianheng[11]=a12[0];
	xianheng[12]=a13[1];
	xianheng[13]=a14[1];
	xianheng[14]=a15[1];
	xianheng[15]=a16[1];
	xianshu[0]=a1[1];
	xianshu[1]=a2[1];
	xianshu[2]=a3[1];
	xianshu[3]=a4[1];
	xianshu[4]=a5[0];
	xianshu[5]=a6[0];
	xianshu[6]=a7[0];
	xianshu[7]=a8[0];
	xianshu[8]=a9[1];
	xianshu[9]=a10[1];
	xianshu[10]=a11[1];
	xianshu[11]=a12[1];
	xianshu[12]=a13[0];
	xianshu[13]=a14[0];
	xianshu[14]=a15[0];
	xianshu[15]=a16[0];
	ge=0;
	for(i=0;i<16;i++)
	{
		ge+=xianheng[i]%10;
		//if(print_main73){printf("%d ",xianshu[i]%10);}
	}
	ge=ge%10;
	shi=0;
	for(i=0;i<16;i++)
	{
		shi+=xianheng[i]%100/10;
	}
	shi=shi%10;
	bai=0;
	for(i=0;i<16;i++)
	{
		bai+=xianheng[i]/100;
	}
	bai=bai%10;
	nineteen[0]=100*bai+10*shi+ge;
	print1(nineteen[0]);
	ge=0;
	for(i=0;i<16;i++)
	{
		ge+=xianshu[i]%10;
	}
	ge=ge%10;
	shi=0;
	for(i=0;i<16;i++)
	{
		shi+=xianshu[i]%100/10;
	}
	shi=shi%10;
	bai=0;
	for(i=0;i<16;i++)
	{
		bai+=xianshu[i]/100;
	}
	bai=bai%10;
	nineteen[1]=100*bai+10*shi+ge;
	print2(nineteen[1]);
}

void eight_hengshujia(int a1[2],int a2[2],int a3[2],int a4[2],int a5[2],int a6[2],int a7[2],int a8[2],int a9[2],int a10[2],int a11[2],int a12[2],int a13[2],int a14[2],int a15[2],int a16[2],int*twenty)
{
	int ge,shi,bai,i,xianheng[16],xianshu[16];
	xianheng[0]=a1[0];
	xianheng[1]=a2[0];
	xianheng[2]=a3[0];
	xianheng[3]=a4[0];
	xianheng[4]=a5[0];
	xianheng[5]=a6[0];
	xianheng[6]=a7[0];
	xianheng[7]=a8[0];
	xianheng[8]=a9[0];
	xianheng[9]=a10[0];
	xianheng[10]=a11[0];
	xianheng[11]=a12[0];
	xianheng[12]=a13[0];
	xianheng[13]=a14[0];
	xianheng[14]=a15[0];
	xianheng[15]=a16[0];
	xianshu[0]=a1[1];
	xianshu[1]=a2[1];
	xianshu[2]=a3[1];
	xianshu[3]=a4[1];
	xianshu[4]=a5[1];
	xianshu[5]=a6[1];
	xianshu[6]=a7[1];
	xianshu[7]=a8[1];
	xianshu[8]=a9[1];
	xianshu[9]=a10[1];
	xianshu[10]=a11[1];
	xianshu[11]=a12[1];
	xianshu[12]=a13[1];
	xianshu[13]=a14[1];
	xianshu[14]=a15[1];
	xianshu[15]=a16[1];
	ge=0;
	for(i=0;i<16;i++)
	{
		ge+=xianheng[i]%10;
		//if(print_main73){printf("%d ",xianshu[i]%10);}
	}
	ge=ge%10;
	shi=0;
	for(i=0;i<16;i++)
	{
		shi+=xianheng[i]%100/10;
	}
	shi=shi%10;
	bai=0;
	for(i=0;i<16;i++)
	{
		bai+=xianheng[i]/100;
	}
	bai=bai%10;
	twenty[0]=100*bai+10*shi+ge;
	print1(twenty[0]);
	ge=0;
	for(i=0;i<16;i++)
	{
		ge+=xianshu[i]%10;
	}
	ge=ge%10;
	shi=0;
	for(i=0;i<16;i++)
	{
		shi+=xianshu[i]%100/10;
	}
	shi=shi%10;
	bai=0;
	for(i=0;i<16;i++)
	{
		bai+=xianshu[i]/100;
	}
	bai=bai%10;
	twenty[1]=100*bai+10*shi+ge;
	print2(twenty[1]);
}

void nine_sigejia(int a1[2],int a2[2],int a3[2],int a4[2],int*ans)
{
	int ge,shi,bai,i,xianheng[4],xianshu[4];
	xianheng[0]=a1[0];
	xianheng[1]=a2[0];
	xianheng[2]=a3[0];
	xianheng[3]=a4[0];
	xianshu[0]=a1[1];
	xianshu[1]=a2[1];
	xianshu[2]=a3[1];
	xianshu[3]=a4[1];
	ge=0;
	for(i=0;i<4;i++)
	{
		ge+=xianheng[i]%10;
		//if(print_main73){printf("%d ",xianshu[i]%10);}
	}
	ge=ge%10;
	shi=0;
	for(i=0;i<4;i++)
	{
		shi+=xianheng[i]%100/10;
	}
	shi=shi%10;
	bai=0;
	for(i=0;i<4;i++)
	{
		bai+=xianheng[i]/100;
	}
	bai=bai%10;
	ans[0]=100*bai+10*shi+ge;
	print1(ans[0]);
	ge=0;
	for(i=0;i<4;i++)
	{
		ge+=xianshu[i]%10;
	}
	ge=ge%10;
	shi=0;
	for(i=0;i<4;i++)
	{
		shi+=xianshu[i]%100/10;
	}
	shi=shi%10;
	bai=0;
	for(i=0;i<4;i++)
	{
		bai+=xianshu[i]/100;
	}
	bai=bai%10;
	ans[1]=100*bai+10*shi+ge;
	print2(ans[1]);
}

void ten_luanjia1(int q8[2],int ans21[2],int ans22[2],int ans23[2],int ans24[2],int*ans25,int main73[7][3])
{
	int ge1,shi1,bai1,ge2,shi2,bai2,a,b,shuji,newshu1[9],newshu2[9],yihao[3],erhao[3];
	ge1=ans21[0]%10;
	shi1=ans21[0]/10%10;
	bai1=ans21[0]/100;
	ge2=ans22[0]%10;
	shi2=ans22[0]/10%10;
	bai2=ans22[0]/100;
	a=(bai1+bai2)%10*100+(shi1+shi2)%10*10+(ge1+ge2)%10;
	ge1=ans21[1]%10;
	shi1=ans21[1]/10%10;
	bai1=ans21[1]/100;
	ge2=ans22[1]%10;
	shi2=ans22[1]/10%10;
	bai2=ans22[1]/100;
	b=(bai1+bai2)%10*100+(shi1+shi2)%10*10+(ge1+ge2)%10;
	shuji=a*b*q8[0];
	//if(print_main73){printf("aaaa:%d",shuji);}
	newshu1[0]=shuji/100000000;
	newshu1[1]=shuji%100000000/10000000;
	newshu1[2]=shuji%10000000/1000000;
	newshu1[3]=shuji%1000000/100000;
	newshu1[4]=shuji%100000/10000;
	newshu1[5]=shuji%10000/1000;
	newshu1[6]=shuji%1000/100;
	newshu1[7]=shuji%100/10;
	newshu1[8]=shuji%10;
	if(print_main73){printf("\n1乘积           ");}
	if(print_main73){printf("%d%d%d     %d%d%d     %d%d%d",newshu1[0],newshu1[1],newshu1[2],newshu1[3],newshu1[4],newshu1[5],newshu1[6],newshu1[7],newshu1[8]);}
	main73[0][0] = newshu1[0] % 10 * 100 + newshu1[1] % 10 * 10 + newshu1[2] % 10;
	main73[0][1] = newshu1[3] % 10 * 100 + newshu1[4] % 10 * 10 + newshu1[5] % 10;
	main73[0][2] = newshu1[6] % 10 * 100 + newshu1[7] % 10 * 10 + newshu1[8] % 10;
	shuji=a*b*q8[1];
	newshu2[0]=shuji/100000000;
	newshu2[1]=shuji%100000000/10000000;
	newshu2[2]=shuji%10000000/1000000;
	newshu2[3]=shuji%1000000/100000;
	newshu2[4]=shuji%100000/10000;
	newshu2[5]=shuji%10000/1000;
	newshu2[6]=shuji%1000/100;
	newshu2[7]=shuji%100/10;
	newshu2[8]=shuji%10;
	yihao[0]=(newshu1[0]+newshu2[0])%10*100+(newshu1[1]+newshu2[1])%10*10+(newshu1[2]+newshu2[2])%10;
	yihao[1]=(newshu1[3]+newshu2[3])%10*100+(newshu1[4]+newshu2[4])%10*10+(newshu1[5]+newshu2[5])%10;
	yihao[2]=(newshu1[6]+newshu2[6])%10*100+(newshu1[7]+newshu2[7])%10*10+(newshu1[8]+newshu2[8])%10;
	if(print_main73){printf("\n2乘积           ");}
	if(print_main73){printf("%d%d%d     %d%d%d     %d%d%d",newshu2[0],newshu2[1],newshu2[2],newshu2[3],newshu2[4],newshu2[5],newshu2[6],newshu2[7],newshu2[8]);}
	main73[1][0] = newshu2[0] % 10 * 100 + newshu2[1] % 10 * 10 + newshu2[2] % 10;
	main73[1][1] = newshu2[3] % 10 * 100 + newshu2[4] % 10 * 10 + newshu2[5] % 10;
	main73[1][2] = newshu2[6] % 10 * 100 + newshu2[7] % 10 * 10 + newshu2[8] % 10;
	ge1=ans23[0]%10;
	shi1=ans23[0]/10%10;
	bai1=ans23[0]/100;
	ge2=ans24[0]%10;
	shi2=ans24[0]/10%10;
	bai2=ans24[0]/100;
	a=(bai1+bai2)%10*100+(shi1+shi2)%10*10+(ge1+ge2)%10;
	ge1=ans23[1]%10;
	shi1=ans23[1]/10%10;
	bai1=ans23[1]/100;
	ge2=ans24[1]%10;
	shi2=ans24[1]/10%10;
	bai2=ans24[1]/100;
	b=(bai1+bai2)%10*100+(shi1+shi2)%10*10+(ge1+ge2)%10;
	shuji=a*b*q8[0];
	//if(print_main73){printf("aaaa:%d",shuji);}
	newshu1[0]=shuji/100000000;
	newshu1[1]=shuji%100000000/10000000;
	newshu1[2]=shuji%10000000/1000000;
	newshu1[3]=shuji%1000000/100000;
	newshu1[4]=shuji%100000/10000;
	newshu1[5]=shuji%10000/1000;
	newshu1[6]=shuji%1000/100;
	newshu1[7]=shuji%100/10;
	newshu1[8]=shuji%10;
	if(print_main73){printf("\n3乘积           ");}
	if(print_main73){printf("%d%d%d     %d%d%d     %d%d%d",newshu1[0],newshu1[1],newshu1[2],newshu1[3],newshu1[4],newshu1[5],newshu1[6],newshu1[7],newshu1[8]);}
	main73[2][0] = newshu1[0] % 10 * 100 + newshu1[1] % 10 * 10 + newshu1[2] % 10;
	main73[2][1] = newshu1[3] % 10 * 100 + newshu1[4] % 10 * 10 + newshu1[5] % 10;
	main73[2][2] = newshu1[6] % 10 * 100 + newshu1[7] % 10 * 10 + newshu1[8] % 10;
	shuji=a*b*q8[1];
	newshu2[0]=shuji/100000000;
	newshu2[1]=shuji%100000000/10000000;
	newshu2[2]=shuji%10000000/1000000;
	newshu2[3]=shuji%1000000/100000;
	newshu2[4]=shuji%100000/10000;
	newshu2[5]=shuji%10000/1000;
	newshu2[6]=shuji%1000/100;
	newshu2[7]=shuji%100/10;
	newshu2[8]=shuji%10;
	erhao[0]=(newshu1[0]+newshu2[0])%10*100+(newshu1[1]+newshu2[1])%10*10+(newshu1[2]+newshu2[2])%10;
	erhao[1]=(newshu1[3]+newshu2[3])%10*100+(newshu1[4]+newshu2[4])%10*10+(newshu1[5]+newshu2[5])%10;
	erhao[2]=(newshu1[6]+newshu2[6])%10*100+(newshu1[7]+newshu2[7])%10*10+(newshu1[8]+newshu2[8])%10;
	if(print_main73){printf("\n4乘积           ");}
	if(print_main73){printf("%d%d%d     %d%d%d     %d%d%d",newshu2[0],newshu2[1],newshu2[2],newshu2[3],newshu2[4],newshu2[5],newshu2[6],newshu2[7],newshu2[8]);}
	main73[3][0] = newshu2[0] % 10 * 100 + newshu2[1] % 10 * 10 + newshu2[2] % 10;
	main73[3][1] = newshu2[3] % 10 * 100 + newshu2[4] % 10 * 10 + newshu2[5] % 10;
	main73[3][2] = newshu2[6] % 10 * 100 + newshu2[7] % 10 * 10 + newshu2[8] % 10;
	ge1=yihao[0]%10;
	shi1=yihao[0]/10%10;
	bai1=yihao[0]/100;
	ge2=erhao[0]%10;
	shi2=erhao[0]/10%10;
	bai2=erhao[0]/100;
	ans25[0]=(bai1+bai2)%10*100+(shi1+shi2)%10*10+(ge1+ge2)%10;
	if(print_main73){printf("\n结果            ");}
	print1(ans25[0]);
	ge1=yihao[1]%10;
	shi1=yihao[1]/10%10;
	bai1=yihao[1]/100;
	ge2=erhao[1]%10;
	shi2=erhao[1]/10%10;
	bai2=erhao[1]/100;
	ans25[1]=(bai1+bai2)%10*100+(shi1+shi2)%10*10+(ge1+ge2)%10;
	print1(ans25[1]);
	ge1=yihao[2]%10;
	shi1=yihao[2]/10%10;
	bai1=yihao[2]/100;
	ge2=erhao[2]%10;
	shi2=erhao[2]/10%10;
	bai2=erhao[2]/100;
	ans25[2]=(bai1+bai2)%10*100+(shi1+shi2)%10*10+(ge1+ge2)%10;
	print2(ans25[2]);
	main73[4][0] = ans25[0] % 1000;
	main73[4][1] = ans25[1] % 1000;
	main73[4][2] = ans25[2] % 1000;
}

void a11_luanjia2(int heng[9],int shu[9],int*ans26,int main73[7][3])
{
	int shuji,shu1[3],shu2[3],newshu1[9],newshu2[9],jieguo1[3],jieguo2[3],a[3],b[3],c[3];
	shu1[0]=heng[0]*100+heng[1]*10+heng[2];
	shu1[1]=heng[3]*100+heng[4]*10+heng[5];
	shu1[2]=heng[6]*100+heng[7]*10+heng[8];
	//if(print_main73){printf("\nasdasdasdasdasdasdasda:%d",heng[8]);}
	shu2[0]=shu[0]*100+shu[1]*10+shu[2];
	shu2[1]=shu[3]*100+shu[4]*10+shu[5];
	shu2[2]=shu[6]*100+shu[7]*10+shu[8];
	shuji=shu1[0]*shu1[1]*shu1[2];
	newshu1[0]=shuji/100000000;
	newshu1[1]=shuji%100000000/10000000;
	newshu1[2]=shuji%10000000/1000000;
	newshu1[3]=shuji%1000000/100000;
	newshu1[4]=shuji%100000/10000;
	newshu1[5]=shuji%10000/1000;
	newshu1[6]=shuji%1000/100;
	newshu1[7]=shuji%100/10;
	newshu1[8]=shuji%10;
	shuji=shuji=shu2[0]*shu2[1]*shu2[2];
	newshu2[0]=shuji/100000000;
	newshu2[1]=shuji%100000000/10000000;
	newshu2[2]=shuji%10000000/1000000;
	newshu2[3]=shuji%1000000/100000;
	newshu2[4]=shuji%100000/10000;
	newshu2[5]=shuji%10000/1000;
	newshu2[6]=shuji%1000/100;
	newshu2[7]=shuji%100/10;
	newshu2[8]=shuji%10;
	main73[5][0] = jieguo1[0] = (newshu1[0] + newshu2[0]) % 10 * 100 + (newshu1[1] + newshu2[1]) % 10 * 10 + (newshu1[2] + newshu2[2]) % 10;
	main73[5][1] = jieguo1[1] = (newshu1[3] + newshu2[3]) % 10 * 100 + (newshu1[4] + newshu2[4]) % 10 * 10 + (newshu1[5] + newshu2[5]) % 10;
	main73[5][2] = jieguo1[2] = (newshu1[6] + newshu2[6]) % 10 * 100 + (newshu1[7] + newshu2[7]) % 10 * 10 + (newshu1[8] + newshu2[8]) % 10;
	if(print_main73){printf("\n结果1           ");}
	print1(jieguo1[0]);
	print1(jieguo1[1]);
	print2(jieguo1[2]);
	a[0]=jieguo1[0]/100;
	a[1]=jieguo1[0]%100/10;
	a[2]=jieguo1[0]%10;
	b[0]=jieguo1[1]/100;
	b[1]=jieguo1[1]%100/10;
	b[2]=jieguo1[1]%10;
	c[0]=jieguo1[2]/100;
	c[1]=jieguo1[2]%100/10;
	c[2]=jieguo1[2]%10;
	newshu1[0]=(a[0]+heng[0])%10;
	newshu1[1]=(a[1]+heng[1])%10;
	newshu1[2]=(a[2]+heng[2])%10;
	newshu1[3]=(b[0]+heng[3])%10;
	newshu1[4]=(b[1]+heng[4])%10;
	newshu1[5]=(b[2]+heng[5])%10;
	newshu1[6]=(c[0]+heng[6])%10;
	newshu1[7]=(c[1]+heng[7])%10;
	newshu1[8]=(c[2]+heng[8])%10;
	newshu2[0]=(shu[0]+newshu1[0])%10;
	newshu2[1]=(shu[1]+newshu1[1])%10;
	newshu2[2]=(shu[2]+newshu1[2])%10;
	newshu2[3]=(shu[3]+newshu1[3])%10;
	newshu2[4]=(shu[4]+newshu1[4])%10;
	newshu2[5]=(shu[5]+newshu1[5])%10;
	newshu2[6]=(shu[6]+newshu1[6])%10;
	newshu2[7]=(shu[7]+newshu1[7])%10;
	newshu2[8]=(shu[8]+newshu1[8])%10;
	//if(print_main73){printf("%d%d%d     \n%d%d%d     %d%d%d",newshu1[0],newshu1[1],newshu1[2],c[0],c[1],c[2],heng[5],heng[6],heng[7]);}
	main73[6][0] = ans26[0] = newshu2[0] * 100 + newshu2[1] * 10 + newshu2[2];
	main73[6][1] = ans26[1] = newshu2[3] * 100 + newshu2[4] * 10 + newshu2[5];
	main73[6][2] = ans26[2] = newshu2[6] * 100 + newshu2[7] * 10 + newshu2[8];
	if(print_main73){printf("结果2           ");}
	print1(ans26[0]);
	print1(ans26[1]);
	print2(ans26[2]);
}

void print1(int a)
{
	if(a<10)
		if(print_main73){printf("00%d     ",a);}
	else if(a<100)
		if(print_main73){printf("0%d     ",a);}
	else 
		if(print_main73){printf("%d     ",a);}
}

void print2(int a)
{
	if(a<10)
		if(print_main73){printf("00%d\n",a);}
	else if(a<100)
		if(print_main73){printf("0%d\n",a);}
	else 
		if(print_main73){printf("%d\n",a);}
}

