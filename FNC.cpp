#include<iostream>
#include<stdlib.h>


using namespace std;
struct nodo;


int x=0,band,sum=0;
struct nodo{
	char dato;
	struct nodo *liga;
};
int main(){
	nodo *p=NULL,*aux,*f,*nuevo,*aux2,*aux3;
	int opc,resp=1,resp1=1,tot,cont;
	char Prod[100];
	cout<<"!!!!!!!!!BIENVENIDO A FORMA NORMAL DE CHOMSKY　　　　　　 "<<endl;
	cout<<"Solo tienes que ingresar cuantas producciones tiene tu gramatica \nIngresar dichas producciones y listo. "<<endl;
	cout<<"TECLA 1 PARA COMENZAR "<<endl;
	cin>>resp;
	system("cls");
	while(resp1==1){
		
		if(p==NULL){
			cout<<"Nombre del estado. "<<endl;
			p=new(nodo);
			cout<<"Agrega el dato: ";
			cin>>p->dato;
			p->liga=NULL;
			f=p;
			cout<<"Total de bloques de "<<p->dato<<"? ";
			cin>>tot;
			fflush(stdin);
			for(int i=0;i<tot;i++){
				int resp2=1;
				cont=0;
				cout<<"Teclea 1 para aregar datos. "<<endl;
				fflush(stdin);
				while(resp2==1){
					aux=new(nodo);
					cout<<"\nAgrega el dato "<<cont+1<<"del bloque "<<i<<": ";
					cin>>aux->dato;
					aux->liga=NULL;
					f->liga=aux;
					f=aux;
					cont++;
					cin>>resp1;
					fflush(stdin);
				}
				Prod[x]=cont;
				x++;
			}
		}
		cout<<"Deseas agregar mas producciones, teclea 1 "<<endl;
		cin>>resp1;
		fflush(stdin);
	}
	if(p==NULL){
		cout<<"LISTA VACIA!!!!! "<<endl;
	}else{
		aux=p;
		cout<<aux->dato<<"->";
		aux=aux->liga;
		while(aux!=NULL){
			cout<<aux->dato<<"|";
			aux=aux->liga;
		}
	}
}
