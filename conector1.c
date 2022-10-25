#include <stdio.h>
#include <mysql.h>


int main() {
    MYSQL conexao;
    mysql_init(&conexao); //retorna um endereço de uma estrutura MYSQL ou NULL em caso de erro de alocação de memória.
    
     // mysql_real_connect estabelece uma conexão com um servidor MySQL  
    if ( mysql_real_connect(&conexao, "localhost", "root", "123456", "cursoc", 3306, NULL, 0) )
    {
       printf("\n Conexao ao banco realizada com sucesso!\n");
  	   mysql_query(&conexao,"INSERT INTO clientes(nome, numero_conta, saldo) values('Emerson', '1', '5000');");
  	   //mysql_query(&conexao,"UPDATE clientes SET saldo = 700 WHERE saldo = '350'");
       //mysql_query(&conexao,"DELETE FROM clientes WHERE nome = 'Andre'");
       //mysql_query(&conexao,"DELETE FROM clientes");
	  
	  
    }
    else
    {
        printf("Falha de conexao\n");
       
    }
    
    return 0;
}
