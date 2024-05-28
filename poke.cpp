#include <iostream>
using namespace std;

main()
{
  int i, qtdPratos, opcaoMontar, opcoesDeMontagem, opcoesProntas,
  contaB, contaT, contaC, contaP, contaN, contaM;

  char opcaoTamanho, opcaoB, opcaoT, opcaoC, opcaoP, opcaoN, opcaoM,
  guardaB1, guardaB2, guardaT1, guardaT2, guardaT3, guardaC1, guardaC2, guardaP1, guardaP2;

  float valor, valorCadaPoke, valorIntB, valorIntT, valorIntC, valorIntP, valorIntN, valorIntM;


  i = 0; contaT = 0; contaC = 0; contaP = 0;
  valor = 0; valorIntB = 0; valorIntT = 0; valorIntC = 0; valorIntP = 0; valorIntN = 0; valorIntM = 0;


  cout << "-------------------\nBem Vindo ao Gengar Poke!" << endl;
  
  cout << "-------------------\nQuantos pratos voce quer montar/escolher?\n-------------------\n";
  cin >> qtdPratos;

  while (i < qtdPratos)
  {
    cout << "-------------------\nPoke " << i + 1 << endl;

    cout << "-------------------\nQual o tamanho do seu Poke?\n" << 
    " N - Normal: 80g de Proteina;\n" <<
    " L - Lendario: 100g de Proteina (+RS3,00);\n" <<
    " M - Mitico: 120g de Proteina (+RS6,00).\n-------------------\n";
    cin >> opcaoTamanho;

    cout << "-------------------\nDeseja:\n" <<
    " 1 - Montar o seu Poke;\n" <<
    " 2 - Escolher um Poke pronto.\n-------------------\n";
    cin >> opcaoMontar;

    contaB = 0;
    valorIntB = 0;
    contaT = 0;
    valorIntT = 0;
    contaC = 0;
    valorIntC = 0;
    contaP = 0;
    valorIntP = 0;
    contaN = 0;
    valorIntN = 0;
    contaM = 0;
    valorIntM = 0;
    valorCadaPoke = 0;

    if (opcaoMontar == 1)
    {
      if (i == 0)
      {
        cout << "TABELA DE PRECOS PADRAO:\n" <<
        "\n Bases: RS5,00" <<
        "\n Toppings: RS2,00" <<
        "\n Crunches: RS2,50" << 
        "\n Nuts: RS2,00" <<
        "\n Molhos: RS2,00\n";
      }

      opcoesDeMontagem = 0;

      cout << "-------------------\nVoce montara seu Poke!\n-------------------" << endl;

      while (opcoesDeMontagem != 7)
      {
        cout << 
        "\n1 - BASES" << endl <<
        "\n2 - TOPPINGS" << endl <<
        "\n3 - CRUNCHES" << endl <<
        "\n4 - PROTEINAS" << endl <<
        "\n5 - NUT" << endl <<
        "\n6 - MOLHO" << endl <<
        "\n7 - FINALIZAR PEDIDO\n\n-------------------\n";
        cin >> opcoesDeMontagem;

        switch (opcoesDeMontagem)
        {
        case 1:

          cout << "\n-------------------\nSeu limite atual eh de 2 bases." << endl;

          while (contaB < 2)
          {
            cout << "Valor atual da sessao de bases: RS" << valorIntB << endl;
            cout << "Base " << contaB + 1 << "/2";

            cout << "\n A - Arroz;\n" <<
            " E - Espaguete (+RS2,00);\n" <<
            " M - Mix de Folhas\n-------------------\n";
            cin >> opcaoB;

            if (opcaoB == 'A')
            {
              valor = valor + 5;
              valorIntB = valorIntB + 5;
            }

            if (opcaoB == 'E')
            {
              valor = valor + 7;
              valorIntB = valorIntB + 7;
            }

            if (opcaoB == 'M')
            {
              valor = valor + 5;
              valorIntB = valorIntB + 5;
            }

            if (contaB == 0)
            {
              guardaB1 = opcaoB;
            }

            if (contaB == 1)
            {
              guardaB2 = opcaoB;
            }

            contaB++;
          }
          break;

        case 2:

          cout << "\n-------------------\nSeu limite atual eh de 3 toppings." << endl;

          while (contaT < 3)
          {
            cout << "Valor atual da sessao de toppings: RS" << valorIntT << endl;
            cout << "Topping " << contaT + 1 << "/3";

            cout << "\n S - Sunomono (+RS2,00);\n" <<
            " T - Tomate cereja;\n" <<
            " C - Cream cheese (+RS3,50);\n" <<
            " K - Kiwi;\n" <<
            " A - Abacaxi\n-------------------\n";
            cin >> opcaoT;

            if (opcaoT == 'S')
            {
              valor = valor + 4;
              valorIntT = valorIntT + 4;
            }

            if (opcaoT == 'T')
            {
              valor = valor + 2;
              valorIntT = valorIntT + 2;
            }

            if (opcaoT == 'C')
            {
              valor = valor + 5.50;
              valorIntT = valorIntT + 5.50;
            }

            if (opcaoT == 'K')
            {
              valor = valor + 2;
              valorIntT = valorIntT + 2;
            }

            if (opcaoT == 'A')
            {
              valor = valor + 2;
              valorIntT = valorIntT + 2;
            }

            if (contaT == 0)
            {
              guardaT1 = opcaoT;
            }

            if (contaT == 1)
            {
              guardaT2 = opcaoT;
            }

            if (contaT == 2)
            {
              guardaT3 = opcaoT;
            }

            contaT++;
          }
          break;

        case 3:

          cout << "\n-------------------\nSeu limite atual eh de 2 crunches." << endl;

          while (contaC < 2)
          {
            cout << "Valor atual da sessao de crunches: RS" << valorIntC << endl;
            cout << "Crunch " << contaC + 1 << "/2";

            cout << "\n C - Cebola Crispy (+RS2,50);\n" <<
            " M - Chips de Mandioca;\n" <<
            " P - Palha de Nori\n-------------------\n";
            cin >> opcaoC;

            if (opcaoC == 'C')
            {
              valor = valor + 5;
              valorIntC = valorIntC + 5;
            }

            if (opcaoC == 'M')
            {
              valor = valor + 2.5;
              valorIntC = valorIntC + 2.5;
            }

            if (opcaoC == 'P')
            {
              valor = valor + 2.5;
              valorIntC = valorIntC + 2.5;
            }

            if (contaC == 0)
            {
              guardaC1 = opcaoC;
            }

            if (contaC == 1)
            {
              guardaC2 = opcaoC;
            }

            contaC++;
          }
          break;

        case 4:

          cout << "\n-------------------\nSeu limite atual eh de 2 proteinas." << endl;

          while (contaP < 2)
          {
            cout << "Valor atual da sessao de bases: RS" << valorIntP << endl;
            cout << "Proteina " << contaP + 1 << "/2";

            cout << "\n F - Frango Grelhado (+RS1,50);\n" <<
            " S - Salmao (+RS3,00);\n" <<
            " A - Atum;\n" <<
            " O - Ovo de Codorna\n-------------------\n";
            cin >> opcaoP;

            if (opcaoP == 'F')
            {
              valor = valor + 6.5;
              valorIntP = valorIntP + 6.5;
            }

            if (opcaoP == 'S')
            {
              valor = valor + 8;
              valorIntP = valorIntP + 8;
            }

            if (opcaoP == 'A')
            {
              valor = valor + 5;
              valorIntP = valorIntP + 5;
            }

            if (opcaoP == 'O')
            {
              valor = valor + 5;
              valorIntP = valorIntP + 5;
            }

            if (contaP == 0)
            {
              guardaP1 = opcaoP;
            }

            if (contaP == 1)
            {
              guardaP2 = opcaoP;
            }

            contaP++;
          }
          break;

        case 5:

          cout << "\n-------------------\nVoce pode escolher um nut." << endl;

          while (contaN < 1)
          {
            cout << "\n A - Amendoim;\n" <<
            " C - Castanha de Caju (+RS1,50);\n" <<
            " M - Milho crunch\n-------------------\n";
            cin >> opcaoN;

            if (opcaoN == 'A')
            {
              valor = valor + 2;
              valorIntN = valorIntN + 2;
              
            }

            if (opcaoN == 'C')
            {
              valor = valor + 3.5;
              valorIntN = valorIntN + 3.5;
            }

            if (opcaoN == 'M')
            {
              valor = valor + 2;
              valorIntN = valorIntN + 2;
            }

            contaN++;
          }

          break;

          case 6:

          cout << "\n-------------------\nVoce pode escolher um molho." << endl;

          while (contaM  < 1)
          {
            cout << "\n M - Mostarda e Mel (+RS1,00);\n" <<
            " S - Shoyo;\n" <<
            " T - Tare\n-------------------\n";
            cin >> opcaoM;

            if (opcaoM == 'M')
            {
              valor = valor + 3;
              valorIntM = valorIntM + 3;
            }

            if (opcaoM == 'S')
            {
              valor = valor + 2;
              valorIntM = valorIntM + 2;
            }

            if (opcaoM == 'T')
            {
              valor = valor + 2;
              valorIntM = valorIntM + 2;
            }

            contaM++;
          }

          break;

          case 7:

            cout << "\nFinalizando pedido...";

          break;
        
        default:

          cout << "\nInvalido\n";

          break;
        }

      }
    } else

    if (opcaoMontar == 2)
    {
      cout << "-------------------\nVoce escolhera seu poke!\n-------------------\n";

      cout << "Temos algumas opcoes:\n" <<
      "-------------------\n1. PIKACHU (RS40,00)\n\n" <<
      "  Espaguete, abacaxi, tomate cereja, chips de mandioca,\n  frango grelhado, milho crunch, mostarda e mel\n\n" <<
      "-------------------\n2. GYARADOS (RS43,00)\n\n" <<
      "  Arroz, sunomono, cream cheese, palha de nori, cebola crispy\n  salmao, atum, castanha de caju, shoyo\n\n" <<
      "-------------------\n3. SNORLAX (RS44,00)\n\n" <<
      "  Espaguete, arroz, cream cheese, kiwi, chips de mandioca, palha de nori,\n  frango grelhado, ovo de codorna, amendoim, mostarda e mel\n\n" <<
      "-------------------\n4. BULBASSAUR (RS42,00)\n\n" <<
      "  Mix de Folhas, sunomono, tomate cereja, kiwi, palha de nori,\n  ovo de codorna, castanha de caju, tare\n\n" <<
      "-------------------\n5. DITTO (RS44,00)\n\n" <<
      "  Mix de folhas, arroz, kiwi, abacaxi, tomate cereja, chips de mandioca,\n  cebola crispy, atum, milho crunch, shoyo\n\n" <<
      "-------------------\n6. GENGAR (RS45,00)\n\n" <<
      "  Espaguete, mix de folhas, sunomono, cream cheese, cebola crispy,\n  salmao, frango grelhado, amendoim, tare\n\n-------------------\n";
      cin >> opcoesProntas;

      switch (opcoesProntas)
      {
      case 1:
        cout << "-------------------\nOpcao escolhida: PIKACHU";
        valorCadaPoke = valorCadaPoke + 40;
        valor = valor + 40;
        break;
      
      case 2:
        cout << "-------------------\nOpcao escolhida: GYARADOS";
        valorCadaPoke = valorCadaPoke + 43;
        valor = valor + 43;
        break;

      case 3:
        cout << "-------------------\nOpcao escolhida: SNORLAX";
        valorCadaPoke = valorCadaPoke + 44;
        valor = valor + 44;
        break;

      case 4:
        cout << "-------------------\nOpcao escolhida: BULBASSAUR";
        valorCadaPoke = valorCadaPoke + 42;
        valor = valor + 42;
        break;

      case 5:
        cout << "-------------------\nOpcao escolhida: DITTO";
        valorCadaPoke = valorCadaPoke + 44;
        valor = valor + 44;
        break;

      case 6:
        cout << "-------------------\nOpcao escolhida: GENGAR";
        valorCadaPoke = valorCadaPoke + 45;
        valor = valor + 45;
        break;
      
      default:
        cout << "Invalido";
        break;
      }
    }

    switch (opcaoTamanho)
    {
      case 'N':
      
      if(opcaoMontar == 1)
      {
        cout << "\n-------------------\nVoce escolheu um Poke NORMAL com as seguinte opcoes:\n\n";
      }

      if(opcaoMontar == 2)
      {
        cout << "\n-------------------\nTamanho: Poke NORMAL\n\n";
      }
      
      break;

      case 'L':

        if(opcaoMontar == 1)
        {
        cout << "\n-------------------\nVoce escolheu um Poke LENDARIO com as seguinte opcoes:\n\n";
        }

        if(opcaoMontar == 2)
        {
        cout << "\n-------------------\nTamanho: Poke LENDARIO\n\n";
        }

        valor = valor + 3;
        valorCadaPoke = valorCadaPoke + 3;
      
      break;

      case 'M':

        if(opcaoMontar == 1)
        {
        cout << "\n-------------------\nVoce escolheu um Poke MITICO com as seguinte opcoes:\n\n";
        }

        if(opcaoMontar == 2)
        {
        cout << "\n-------------------\nTamanho: Poke MITICO\n\n";
        }

        valor = valor + 6;
        valorCadaPoke = valorCadaPoke + 6;
      
      break;
    }

    if(opcaoMontar == 1)
    {
      cout << "-------------------\nBases - (RS" << valorIntB << "):\n\n";

      if (guardaB1 == 'A')
      {
        cout << "Arroz;\n";
      }

      if (guardaB1 == 'E')
      {
        cout << "Espaguete;\n";
      }

      if (guardaB1 == 'M')
      {
        cout << "Mix de Folhas;\n";
      }


      if (guardaB2 == 'A')
      {
        cout << "Arroz;\n";
      }

      if (guardaB2 == 'E')
      {
        cout << "Espaguete;\n";
      }

      if (guardaB2 == 'M')
      {
        cout << "Mix de Folhas;\n";
      }


      cout << "-------------------\nToppings - (RS" << valorIntT << "):\n\n";

      if (guardaT1 == 'S')
      {
        cout << "Sunomono;\n";
      }

      if (guardaT1 == 'T')
      {
        cout << "Tomate Cereja;\n";
      }

      if (guardaT1 == 'C')
      {
        cout << "Cream Cheese;\n";
      }

      if (guardaT1 == 'K')
      {
        cout << "Kiwi;\n";
      }

      if (guardaT1 == 'A')
      {
        cout << "Abacaxi;\n";
      }


      if (guardaT2 == 'S')
      {
        cout << "Sunomono;\n";
      }

      if (guardaT2 == 'T')
      {
        cout << "Tomate Cereja;\n";
      }

      if (guardaT2 == 'C')
      {
        cout << "Cream Cheese;\n";
      }

      if (guardaT2 == 'K')
      {
        cout << "Kiwi;\n";
      }

      if (guardaT2 == 'A')
      {
        cout << "Abacaxi;\n";
      }


      if (guardaT3 == 'S')
      {
        cout << "Sunomono;\n";
      }

      if (guardaT3 == 'T')
      {
        cout << "Tomate Cereja;\n";
      }

      if (guardaT3 == 'C')
      {
        cout << "Cream Cheese;\n";
      }

      if (guardaT3 == 'K')
      {
        cout << "Kiwi;\n";
      }

      if (guardaT3 == 'A')
      {
        cout << "Abacaxi;\n";
      }


      cout << "-------------------\nCrunches - (RS" << valorIntC << "):\n\n";

      if (guardaC1 == 'C')
      {
        cout << "Cebola Crispy;\n";
      }

      if (guardaC1 == 'M')
      {
        cout << "Chips de Mandioca;\n";
      }

      if (guardaC1 == 'P')
      {
        cout << "Palha de Nori;\n";
      }


      if (guardaC2 == 'C')
      {
        cout << "Cebola Crispy;\n";
      }

      if (guardaC2 == 'M')
      {
        cout << "Chips de Mandioca;\n";
      }

      if (guardaC2 == 'P')
      {
        cout << "Palha de Nori;\n";
      }


      cout << "-------------------\nProteinas - (RS" << valorIntP << "):\n\n";

      if (guardaP1 == 'F')
      {
        cout << "Frango Grelhado;\n";
      }

      if (guardaP1 == 'S')
      {
        cout << "Salmao;\n";
      }

      if (guardaP1 == 'A')
      {
        cout << "Atum;\n";
      }

      if (guardaP1 == 'O')
      {
        cout << "Ovo de Codorna;\n";
      }


      if (guardaP2 == 'F')
      {
        cout << "Frango Grelhado;\n";
      }

      if (guardaP2 == 'S')
      {
        cout << "Salmao;\n";
      }

      if (guardaP2 == 'A')
      {
        cout << "Atum;\n";
      }

      if (guardaP2 == 'O')
      {
        cout << "Ovo de Codorna;\n";
      }


      cout << "-------------------\nNut - (RS" << valorIntN << "):\n\n";

      if (opcaoN == 'A')
      {
        cout << "Amendoim;\n";
      }

      if (opcaoN == 'C')
      {
        cout << "Castanha de Caju;\n";
      }

      if (opcaoN == 'M')
      {
        cout << "Milho Crunch;\n";
      }


      cout << "-------------------\nMolho - (RS" << valorIntM << "):\n\n";

      if (opcaoM == 'M')
      {
        cout << "Mostarda e Mel;\n";
      }

      if (opcaoM == 'S')
      {
        cout << "Shoyo;\n";
      }

      if (opcaoM == 'T')
      {
        cout << "Tare;\n";
      }

      cout << "-------------------\n";
    }


    valorCadaPoke = valorCadaPoke + valorIntB + valorIntC + valorIntM + valorIntN + valorIntP + valorIntT;

    if (qtdPratos > 1)
    {
      cout << "O Poke " << i + 1 << " ficou no valor de: RS" << valorCadaPoke << "\n-------------------\n\n";
    }

      i++;

    }
    
    cout << "-------------------\nSeu pedido ficou no valor total de: RS" << valor << "\n-------------------";

}
