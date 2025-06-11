
#include<stdio.h>
#include<math.h>

int calc(int x, int y) {
    int diff = abs(x - y);
    if (diff == 0) return 25;
    if (diff == 1) return 16;
    if (diff == 2) return 9;
    return 0;
}

int main(void){
	int user[12]={};
	int i;
	int bloom[12]={2,2,2,2,2,1,2,1,2,2,2,2};
	int stella[12]={2,1,1,1,1,1,2,2,2,2,1,2};
	int flora[12]={1,2,2,1,2,2,1,1,2,2,1,1};
	int miusa[12]={1,1,1,1,1,1,1,1,2,2,1,1};
	int tekna[12]={2,2,2,2,1,1,1,1,1,1,2,1};
	int layla[12]={2,2,2,2,2,1,2,2,2,1,2,2};
	
	printf("Bir oyun grubunda lider olmak ister misin? Mesela oyun kurallari anlatan, \nherkese ne yapmasi gerektigini soyleyen kisi olmaktan hoslanir misin?\n");
	scanf("%d",&user[0]);
	printf("Zor bir durumla karsilastiginda sakin kalabilir misin? Mesela bir oyuncak \nkirildiginda ya da bir oyun bozuldugunda uzulmeden dusunup cozum bulabilir misin?\n");
	scanf("%d",&user[1]);
	printf("Bir problem oldugunda degisik ve yeni fikirler bulur musun? Mesela bozulan \nbir legoyu farkli bir sekilde tamir etmek ya da yeni bir oyun uydurmak gibi.\n");
	scanf("%d",&user[2]);
	printf("Telefonlar, tabletler ya da robotlar gibi teknolojik aletlere merakli misin? \nBilim deneylerini izlemeyi sever misin?\n");
	scanf("%d",&user[3]);
	printf("Disarida, agaclarin arasinda ya da parkta vakit gecirmek sana huzur verir mi? \nOrada oynarken mutlu olur musun?\n");
	scanf("%d",&user[4]);
	printf("Dunyayi korumayi dusunur musun? Mesela copleri geri donusum kutusuna atmak ya \nda sokaktaki cicekleri korumak gibi seyler yapar misin?\n");
	scanf("%d",&user[5]);
	printf("Yeni arkadaslar edinmek seni mutlu eder mi? Mesela yeni bir okula ya da parka \ngittiginde hemen yeni cocuklarla tanisip oynamak ister misin?\n");
	scanf("%d",&user[6]);
	printf("Diger cocuklarla partilere ya da etkinliklere katilmayi sever misin? Mesela \ndogum gunu partilerinde eglenceye hemen katilir misin?\n");
	scanf("%d",&user[7]);
	printf("Baskalarinin uzuldugunu ya da sevindigini anlayabilir misin? Mesela bir \narkadasin agladiginda ona sarilip neden uzuldugunu sormak ister misin?\n");
	scanf("%d",&user[8]);
	printf("Cizim yapmak, sarkilar soylemek ya da resim boyamak gibi sanatsal seyleri \nyapmayi sever misin?\n");
	scanf("%d",&user[9]);
	printf("Bir isi bitirmek icin sabirli olabilir misin? Mesela cok uzun bir puzzle yapmak \nistediginde hemen vazgecmeden bitirir misin?\n");
	scanf("%d",&user[10]);
	printf("Yeni ve heyecanli seyler yapmayi sever misin? Mesela yeni bir parkta kaydiraktan \nkaymak ya da bilmedigin bir yemek tatmak gibi.\n");
	scanf("%d",&user[11]);
	
	int bloom_score=0, stella_score=0, flora_score=0, miusa_score=0, tekna_score=0, layla_score=0;
	for(i=0; i<12; i++){
		bloom_score+=calc(bloom[i],user[i]);
		stella_score+=calc(stella[i],user[i]);
		flora_score+=calc(flora[i],user[i]);
		miusa_score+=calc(miusa[i],user[i]);
		tekna_score+=calc(tekna[i],user[i]);
		layla_score+=calc(layla[i],user[i]);
	}
	
	printf("Bloom: %d \nStella: %d \nFlora: %d \nMiusa: %d \nTekna: %d \nLayla: %d \n", bloom_score,stella_score,flora_score,miusa_score,tekna_score,layla_score);
	
}