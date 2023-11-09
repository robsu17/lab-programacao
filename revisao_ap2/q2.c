#include <stdio.h>
#include <string.h>

struct Produto {
    int codigo;
    char nome[10];
    char marca[10];
    float preco;
};

int main() {

    int opcao;
    int codigo;
    struct Produto produtos[10];

    for (int i = 0; i < 10; ++i) {
        produtos[i].codigo = 0;
        produtos[i].preco = 0;
        strcpy(produtos[i].marca, "Nenhum");
        strcpy(produtos[i].nome, "Nenhum");
    }

    while (1) {

        printf("\n===== CADASTRO DE ESTOQUE =====\n");
        printf("Cadastrar um produto - 1\n");
        printf("Listar produtos - 2\n");
        printf("Excluir um produto - 3\n");
        printf("Digite um opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            for (int i = 0; i < 10; ++i) {
                if (produtos[i].codigo == 0) {
                    printf("Nome do produto: ");
                    scanf("%s", produtos[i].nome);

                    printf("Marca do produto: ");
                    scanf("%s", produtos[i].marca);

                    printf("Codigo do produto: ");
                    scanf("%d", &produtos[i].codigo);

                    printf("Preco do produto: ");
                    scanf("%f", &produtos[i].preco);

                    break;
                }
            }
        }

        if (opcao == 2) {
            printf("Lista de produtos: \n");
            printf("\n");
            for (int i = 0; i < 10; ++i) {
                printf("Produto %d: \n", i + 1);
                printf("  Nome: %s\n", produtos[i].nome);
                printf("  Marca: %s\n", produtos[i].marca);
                printf("  Codigo: %d\n", produtos[i].codigo);
                printf("  Preco: R$ %.2f\n", produtos[i].preco);
                printf("\n");
            }
        }

        if (opcao == 3) {
            printf("Digite o codigo do produto para exclui-lo: ");
            scanf("%d", &codigo);
            for (int i = 0; i < 10; ++i) {
                if (produtos[i].codigo == codigo) {
                    produtos[i].codigo = 0;
                    produtos[i].preco = 0;
                    strcpy(produtos[i].marca, "Nenhum");
                    strcpy(produtos[i].nome, "Nenhum");
                    break;
                }
            }
        }
    }

    return 0;
}