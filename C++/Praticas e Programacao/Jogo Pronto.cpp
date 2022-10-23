#include <iostream>
using namespace std;

void inicializar(int mat[][3]);          // inicializarializes the mat with 0's
char desenha_casa(int block);         // Prints each square of the mat
void desenha(int mat[][3]);          // desenha the mat
void jogar(int mat[][3], int); // Play one move
int continuar(int *mat[3]);   // Check if there is still white space
int ganhador(int *mat[3]);        // Check if anyone won
int cod_jogo(int mat[][3]);           // PLay an entire cod_jogo
void placar(int, int &, int &); // desenha the placar

int main()
{
    int mat[3][3];

    int cont=0, jogador1=0, jogador2=0, res;
    do{
        inicializar(mat);
        res = cod_jogo(mat);
        desenha(mat);
        placar(res, jogador1, jogador2);

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
    cout<<endl;
    for(int coluna=0 ; coluna<3 ; coluna++){
        cout<<" "<< desenha_casa(mat[coluna][0]) <<" |";
        cout<<" "<< desenha_casa(mat[coluna][1]) <<" |";
        cout<<" "<< desenha_casa(mat[coluna][2]) <<endl;

        if(coluna!=2){
            cout<<"___ ___ ___\n"<<endl;
        }
    }
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

    // Adding the lines
    for(coluna=0 ; coluna<3 ; coluna++){
        sum=0;

        for(col=0 ; col<3 ; col++)
            sum += mat[coluna][col];

        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;
    }

    // Adding the columns
    for(col=0 ; col<3 ; col++){
        sum=0;

        for(coluna=0 ; coluna<3 ; coluna++)
            sum += mat[coluna][col];

        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;
    }

    // Adding the diagonals
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

int cod_jogo(int mat[][3])
{
    int turn=0, cont, ganha;

    do{
        desenha(mat);
        cout<<"Jogador "<<1+turn%2<<endl;
        jogar(mat, turn%2);
        turn++;

        cont=continuar(mat);
        ganha = ganhador(mat);
    }while(cont && !ganha);

    if(ganha==1){
        cout<<"Jogador 1 ganhou!\n"<<endl;
        return 1;
    }else
        if(ganha==-1){
            cout<<"Jogador 2 ganhou!\n"<<endl;
            return 2;
    }else
        cout<<"Empate\n"<<endl;
    return 0;
}

void placar(int res, int &jogador1, int &jogador2)
{
    if(res==1)
        jogador1++;
    if(res==2)
        jogador2++;

    cout<<"Placar: "<<endl;
    cout<<jogador1<<" x "<<jogador2<<endl;
}