#include<stdio.h>
int main(){
	int total_amt, sur_charge,unti;
	int amt;
	printf("chi so cu: ");
	scanf("%d",&total_amt);
	printf("chi so moi: ");
	scanf("%d",&sur_charge);
	unti = sur_charge - total_amt ;
	if(unti<50){
		amt = unti *10;
	}else if(unti<100){
		amt = 50*10 + (unti - 50)*15;
	}else if(unti<150){
		amt = 50*10 + 50*15 +(unti - 100)*20;
	}else if(unti<200){
		amt = 50*10 + 50*15 + 50*20+(unti - 150)*25;
	}else{
		amt = 50*10 + 50*15 +50*20+200*25+(unti - 200)*30;
	}
	printf("so dien tieu thu trong thang: %d kwh\n",unti);
	printf(" tien dien tieu thu trong thang: %.2f VND\n",amt);
}
