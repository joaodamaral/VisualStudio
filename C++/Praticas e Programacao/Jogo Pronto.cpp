#include <iostream>
using namespace std;

void inicializar(int mat[][3]);
char desenha_casa(int block);
void desenha(int mat[][3]);
void jogar(int mat[][3], int);
int continuar(int *mat[3]);
int ganhador(int *mat[3]);
int cod_jogo(int mat[][3], char nome1[30], char nome2[30]);
void placar(int, int &, int &, char nome1[30], char nome2[30]);

int main()
{
    int mat[3][3];
    int cont=0, jogador1=0, jogador2=0, res; 
    char nome1[30], nome2[30];

    cout << "Insira o nome do jogador 1: ";
    cin >> nome1; 
    cout << "Insira o nome do jogador 2: ";
    cin >> nome2;

    do{
        inicializar(mat);
        res = cod_jogo(mat, nome1, nome2);
        desenha(mat);
        placar(res, jogador1, jogador2, nome1, nome2);

        cout<<"\n Outra partida?"<<endl;
        cout<<"0. Sair"<<endl;
        cout<<"1. Jogar de novo"<<endl;
        cin >> cont;
    }while(cont);

     /*Final dos códigos para rodar no ganhadows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}

void inicializar(int mat[][3])
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            mat[i][j]=0;

}

char desenha_casa(int block)
{
    if(block==0)
        return ' ';
    else if(block==1)
        return 'X';
    else
        return 'O';
}

void desenha(int mat[][3])
{
    int i, j;
	cout << "    1    2    3"<< endl;
	cout << "    -----------"<< endl;
	for (i=0; i < 3; i++)
	{
		cout << i+1 << "  |";
		for (j=0; j < 3; j++)
		{
			cout<<" "<< desenha_casa(mat[i][j]) <<" |";
            
		}
		cout << endl;
		if (i<2)
		{
			cout << "   |-----------|" << endl;
		}
	}
	cout << "    -----------" << endl;
}

void jogar(int mat[][3], int player)
{
    int coluna, col, check;
    do{
        cout<<"Linha: ";
        cin >>coluna;
        cout<<"Coluna: ";
        cin >> col;
        coluna--; col--;

        check = mat[coluna][col] || coluna<0 || coluna>2 || col<0 || col>2;
        if(check)
            cout<<"Essa casa não está vazia ou fora do intervalo 3x3"<<endl;

    }while(check);

    if(player==0)
        mat[coluna][col]=1;
    else
        mat[coluna][col]=-1;
}

int continuar(int mat[][3])
{
    for(int i=0 ; i<3 ; i++)
        for(int j=0 ; j<3 ; j++)
            if(mat[i][j]==0)
                return 1;
    return 0;
}

int ganhador(int mat[][3])
{
    int coluna, col, sum;

    // Soma das Linhas
    for(coluna=0 ; coluna<3 ; coluna++){
        sum=0;

        for(col=0 ; col<3 ; col++)
            sum += mat[coluna][col];

        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;
    }

    // Soma das Colunas
    for(col=0 ; col<3 ; col++){
        sum=0;

        for(coluna=0 ; coluna<3 ; coluna++)
            sum += mat[coluna][col];

        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;
    }

    // Soma das Diagonais
    sum=0;
    for(coluna=0 ; coluna<3 ; coluna++)
        sum += mat[coluna][coluna];
    if(sum==3)
        return 1;
    if(sum==-3)
        return -1;

    sum=mat[0][2]+mat[1][1]+mat[2][0];
    if(sum==3)
        return 1;
    if(sum==-3)
        return -1;

    return 0;
}

void jogador(int turn, char nome1[30], char nome2[30]){

    if (turn%2 == 0){
            cout << "Turno do jogador " << nome1 << endl;
        } else{
            cout << "Turno do jogador " << nome2 << endl;
        }
}

int cod_jogo(int mat[][3], char nome1[30], char nome2[30])
{
    int turn=0, cont, ganha;
    
    do{
        desenha(mat);
        jogador(turn, nome1, nome2);    
        jogar(mat, turn%2);
        turn++;

        cont=continuar(mat);
        ganha = ganhador(mat);
    }while(cont && !ganha);

    if(ganha==1){
        cout<< nome1 <<" ganhou!\n"<<endl;
        return 1;
    }else
        if(ganha==-1){
            cout<< nome2 <<" ganhou!\n"<<endl;
            return 2;
    }else
        cout<<"Empate\n"<<endl;
    return 0;
}

void placar(int res, int &jogador1, int &jogador2, char nome1[30], char nome2[30])
{
    if(res==1)
        jogador1++;
    if(res==2)
        jogador2++;

    cout<< "Placar: " <<endl;
    cout<< nome1 <<"   "<< jogador1 <<" x "<< jogador2 <<"   "<< nome2 <<endl;
}