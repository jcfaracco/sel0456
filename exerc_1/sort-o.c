#include <stdlib.h>
#include <stdio.h>

typedef struct {
  char *data;
  int key;
} item_t;



// Método construtor:
item_t *create_item(int size) {
	item_t *array;
  array=malloc(size*sizeof(item_t));    //Na minha função main, eu pedi para criar um array com 5 elementos                                        //Entretanto, cada elemento terá 2 objetos, o que faz com que o meu
                                        //array ser obrigado a ter 10 espaços ao invés de 5; então precisa-se
                                        // alocar o tamanho do meu array * quantidade de objetos na memória dinamica
                                        // para o meu array.
	for(int i = 0; i < size; i++){
		array[i].data = 0;
		array[i].key  = 0;                  // Sei que Null para int é 0, entretanto fica mais claro para mim que
                                        // estou criando um objeto com valor nulo;
	}
	return array;                         // retorna array com 5 elementos assim: {(null), 0}
}


// Método para adicionar valores ao array:
void set_element(item_t *array,int value, const char *name) { // Para essa função
	int i,j,k;
  int count = 0;
  for (i=0;i<sizeof(array);i++){
    if(array[i].key == 0){
      break;                           // Desse modo, eu guardo na variável i, a posição em que tenho
                                       // informação nula ainda. 
    }
  }
  for(j=0;;j++){
    if(name[j]=='\n'){
      break;
    }
    
  }
  array[i].data = malloc((j+1)*sizeof(char)); //reajustando a memória para a quantidade de caracteres que o nome tem
  for(int k = 0; k < j + 1; k++){
      array[i].data[k] = name[k];
    }
    array[i].key = value;
}

 void sort(item_t * a, int n) {
  int i = 0, j = 0;
  int s = 2;

  for(; i < n && s != 0; i++) {
    s = 0;
    for(j = 0; j < n-1; j++){ //Esse for não havia chaves... 
                              //isso fazia com que não houvesse as comparações necessárias // Estava faltando abrir chaves
      if(a[j].key > a[j+1].key) {
        item_t t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
        s++;
      }
    //n--; Esse n diminui o número de comparações, ou seja.. cada iteração há menos comparações... o que não garante a ordenação correta
    }
  } // Estava faltando fechar chaves
}

int main(void) {
  item_t *array;
  int n_array = 5;
	array = create_item(n_array);
	set_element(array, 3, "Alisson");
	set_element(array, 4, "Bruna");
	set_element(array, 2, "Joniscarlos");
	set_element(array, 5, "whinderson");
	set_element(array, 1, "jonescley");
	sort(array,n_array);
  for(int i = 0; i < n_array; i++) {
    printf("array[%d] = {%s, %d}\n", i, array[i].data, array[i].key);
  }
 }


