#include <iostream>
#include <string>
#include <locale>
#include <cctype>
using namespace std;

const float PRECO_BASE = 5.0;
const float PRECO_TOPPING = 2.0;
const float PRECO_CRUNCH = 2.5;
const float PRECO_PROTEINA = 5.0;
const float PRECO_NUT = 2.0;
const float PRECO_MOLHO = 2.0;
const float EXTRA_LENDARIO = 3.0;
const float EXTRA_MITICO = 6.0;
const string MOEDA = "R$";

struct Ingrediente {
  string nome;
  float preco;
};

float escolherIngrediente(string titulo, Ingrediente opcoes[], int limite, string unidade, char escolhidos[]) {
  int count = 0;
  float total = 0;
  while (count < limite) {
    cout << "\n" << titulo << " " << count + 1 << "/" << limite << " (" << unidade << ")" << endl;
    for (int i = 0; i < limite * 2 && !opcoes[i].nome.empty(); ++i) {
      cout << " " << (char)('A' + i) << " - " << opcoes[i].nome << " (" << MOEDA << opcoes[i].preco << ")\n";
    }
    char opcao;
    cin >> opcao;
    opcao = toupper(opcao);
    int idx = opcao - 'A';
    if (idx >= 0 && idx < limite * 2 && !opcoes[idx].nome.empty()) {
      total += opcoes[idx].preco;
      escolhidos[count] = opcao;
      count++;
    }
  }
  return total;
}

float montarPoke(char &tamanho) {
  Ingrediente bases[] = {
    {"Arroz", 5}, {"Espaguete", 7}, {"Mix de Folhas", 5}, {}
  };
  Ingrediente toppings[] = {
    {"Sunomono", 4}, {"Tomate Cereja", 2}, {"Cream Cheese", 5.5}, {"Kiwi", 2}, {"Abacaxi", 2}, {}
  };
  Ingrediente crunches[] = {
    {"Cebola Crispy", 5}, {"Chips de Mandioca", 2.5}, {"Palha de Nori", 2.5}, {}
  };
  Ingrediente proteinas[] = {
    {"Frango Grelhado", 6.5}, {"Salmao", 8}, {"Atum", 5}, {"Ovo de Codorna", 5}, {}
  };
  Ingrediente nuts[] = {
    {"Amendoim", 2}, {"Castanha de Caju", 3.5}, {"Milho Crunch", 2}, {}
  };
  Ingrediente molhos[] = {
    {"Mostarda e Mel", 3}, {"Shoyo", 2}, {"Tare", 2}, {}
  };

  char escolhidos[5];
  float total = 0;

  total += escolherIngrediente("Base", bases, 2, "base", escolhidos);
  total += escolherIngrediente("Topping", toppings, 3, "topping", escolhidos);
  total += escolherIngrediente("Crunch", crunches, 2, "crunch", escolhidos);
  total += escolherIngrediente("Proteina", proteinas, 2, "proteina", escolhidos);
  total += escolherIngrediente("Nut", nuts, 1, "nut", escolhidos);
  total += escolherIngrediente("Molho", molhos, 1, "molho", escolhidos);

  switch (tamanho) {
    case 'L': total += EXTRA_LENDARIO; break;
    case 'M': total += EXTRA_MITICO; break;
  }

  return total;
}

float escolherPronto(int escolha, char tamanho) {
  float precos[] = {40, 43, 44, 42, 44, 45};
  float total = (escolha >= 1 && escolha <= 6) ? precos[escolha - 1] : 0;
  if (tamanho == 'L') total += EXTRA_LENDARIO;
  if (tamanho == 'M') total += EXTRA_MITICO;
  return total;
}

int main() {
  setlocale(LC_ALL, "");
  int qtd, modo, escolha;
  char tamanho;
  float valorTotal = 0;

  cout << "Quantos Pokes deseja montar/escolher?\n";
  cin >> qtd;

  for (int i = 0; i < qtd; ++i) {
    cout << "\nPoke " << i + 1 << ":\n";
    cout << "Tamanho (N - Normal, L - Lendario (+R$3.00), M - Mitico (+R$6.00)): ";
    cin >> tamanho;
    tamanho = toupper(tamanho);

    cout << "1 - Montar Poke\n2 - Escolher pronto\n";
    cin >> modo;

    float valor = 0;

    if (modo == 1) {
      valor = montarPoke(tamanho);
    } else {
      cout << "\n1. Pikachu - " << MOEDA << "40\n2. Gyarados - " << MOEDA << "43\n3. Snorlax - " << MOEDA << "44\n4. Bulbassaur - " << MOEDA << "42\n5. Ditto - " << MOEDA << "44\n6. Gengar - " << MOEDA << "45\n";
      cin >> escolha;
      valor = escolherPronto(escolha, tamanho);
    }

    cout << "Poke " << i + 1 << " - Valor: " << MOEDA << valor << "\n";
    valorTotal += valor;
  }

  cout << "\nValor total do pedido: " << MOEDA << valorTotal << endl;
  return 0;
}