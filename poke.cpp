#include <iostream>
using namespace std;

main()
{
  int i, qtdPratos, OpcaoMontar, opcoesDeMontagem, opcoesProntas,
  contaB, contaT, contaC, contaP, contaN, contaM;

  char OpcaoTamanho, OpcaoB, OpcaoT, OpcaoC, OpcaoP, OpcaoN, OpcaoM, a_agudo, a_tio, A_agudo, A_tio, e_circ, e_agudo, i_agudo, I, o, c, C, S,
  guardaB1, guardaB2, guardaT1, guardaT2, guardaT3, guardaC1, guardaC2, guardaP1, guardaP2;

  float valor, valorCadaPoke, valorIntB, valorIntT, valorIntC, valorIntP, valorIntN, valorIntM;


  i = 0; contaT = 0; contaC = 0; contaP = 0; 
  valor = 0; valorIntB = 0; valorIntT = 0; valorIntC = 0; valorIntP = 0; valorIntN = 0; valorIntM = 0;
  a_agudo = 160; a_tio = 198; A_agudo = 181; A_tio = 199; e_circ = 136; e_agudo = 130; i_agudo = 161; I = 214; c = 135; C = 128; o = 228; S = 36;


  cout << "-------------------\nBem Vindo ao Gengar Poke!" << endl;
  
  cout << "-------------------\nQuantos pokes voc" << e_circ << " quer montar/escolher?\n-------------------\n";
  cin >> qtdPratos;

  while (i < qtdPratos)
  {
    cout << "-------------------\nPoke " << i + 1 << endl;

    cout << "-------------------\nQual o tamanho do seu Poke?\n" << 
    " N - Normal: 80g de Prote" << i_agudo << "na;\n" <<
    " L - Lend" << a_agudo << "rio: 100g de Prote" << i_agudo << "na (+R" << S << "3,00);\n" <<
    " M - M" << i_agudo << "tico: 120g de Prote" << i_agudo << "na (+R" << S << "6,00).\n-------------------\n";
    cin >> OpcaoTamanho;

    cout << "-------------------\nDeseja:\n" <<
    " 1 - Montar o seu Poke;\n" <<
    " 2 - Escolher um Poke pronto.\n-------------------\n";
    cin >> OpcaoMontar;

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

    if (OpcaoMontar == 1)
    {
      if (i == 0)
      {
        cout << "TABELA DE PRE" << C << "OS PADR" << A_tio << "O:\n" <<
        "\n Bases: R" << S << "5,00" <<
        "\n Toppings: R" << S << "2,00" <<
        "\n Crunches: R" << S << "2,50" <<
        "\n Prote" << i_agudo << "nas: R" << S << "5,00" << 
        "\n Nuts: R" << S << "2,00" <<
        "\n Molhos: R" << S << "2,00\n";
      }

      opcoesDeMontagem = 0;

      cout << "-------------------\nVoc" << e_circ << " montar" << a_agudo << " seu Poke!\n-------------------" << endl;

      while (opcoesDeMontagem != 7)
      {
        cout << 
        "\n1 - BASES" << endl <<
        "\n2 - TOPPINGS" << endl <<
        "\n3 - CRUNCHES" << endl <<
        "\n4 - PROTE" << I << "NAS" << endl <<
        "\n5 - NUT" << endl <<
        "\n6 - MOLHO" << endl <<
        "\n7 - FINALIZAR PEDIDO\n\n-------------------\n";
        cin >> opcoesDeMontagem;

        switch (opcoesDeMontagem)
        {
        case 1:

          cout << "\n-------------------\nSeu limite atual " << e_agudo << " de 2 bases." << endl;

          while (contaB < 2)
          {
            cout << "Valor atual da sess" << a_tio << "o de bases: R" << S << "" << valorIntB << endl;
            cout << "Base " << contaB + 1 << "/2";

            cout << "\n A - Arroz;\n" <<
            " E - Espaguete (+R" << S << "2,00);\n" <<
            " M - Mix de Folhas\n-------------------\n";
            cin >> OpcaoB;

            if (OpcaoB == 'A')
            {
              valor = valor + 5;
              valorIntB = valorIntB + 5;
            }

            if (OpcaoB == 'E')
            {
              valor = valor + 7;
              valorIntB = valorIntB + 7;
            }

            if (OpcaoB == 'M')
            {
              valor = valor + 5;
              valorIntB = valorIntB + 5;
            }

            if (contaB == 0)
            {
              guardaB1 = OpcaoB;
            }

            if (contaB == 1)
            {
              guardaB2 = OpcaoB;
            }

            contaB++;
          }
          break;

        case 2:

          cout << "\n-------------------\nSeu limite atual " << e_agudo << " de 3 toppings." << endl;

          while (contaT < 3)
          {
            cout << "Valor atual da sess" << a_tio << "o de toppings: R" << S << "" << valorIntT << endl;
            cout << "Topping " << contaT + 1 << "/3";

            cout << "\n S - Sunomono (+R" << S << "2,00);\n" <<
            " T - Tomate cereja;\n" <<
            " C - Cream cheese (+R" << S << "3,50);\n" <<
            " K - Kiwi;\n" <<
            " A - Abacaxi\n-------------------\n";
            cin >> OpcaoT;

            if (OpcaoT == 'S')
            {
              valor = valor + 4;
              valorIntT = valorIntT + 4;
            }

            if (OpcaoT == 'T')
            {
              valor = valor + 2;
              valorIntT = valorIntT + 2;
            }

            if (OpcaoT == 'C')
            {
              valor = valor + 5.50;
              valorIntT = valorIntT + 5.50;
            }

            if (OpcaoT == 'K')
            {
              valor = valor + 2;
              valorIntT = valorIntT + 2;
            }

            if (OpcaoT == 'A')
            {
              valor = valor + 2;
              valorIntT = valorIntT + 2;
            }

            if (contaT == 0)
            {
              guardaT1 = OpcaoT;
            }

            if (contaT == 1)
            {
              guardaT2 = OpcaoT;
            }

            if (contaT == 2)
            {
              guardaT3 = OpcaoT;
            }

            contaT++;
          }
          break;

        case 3:

          cout << "\n-------------------\nSeu limite atual " << e_agudo << " de 2 crunches." << endl;

          while (contaC < 2)
          {
            cout << "Valor atual da sess" << a_tio << "o de crunches: R" << S << "" << valorIntC << endl;
            cout << "Crunch " << contaC + 1 << "/2";

            cout << "\n C - Cebola Crispy (+R" << S << "2,50);\n" <<
            " M - Chips de Mandioca;\n" <<
            " P - Palha de Nori\n-------------------\n";
            cin >> OpcaoC;

            if (OpcaoC == 'C')
            {
              valor = valor + 5;
              valorIntC = valorIntC + 5;
            }

            if (OpcaoC == 'M')
            {
              valor = valor + 2.5;
              valorIntC = valorIntC + 2.5;
            }

            if (OpcaoC == 'P')
            {
              valor = valor + 2.5;
              valorIntC = valorIntC + 2.5;
            }

            if (contaC == 0)
            {
              guardaC1 = OpcaoC;
            }

            if (contaC == 1)
            {
              guardaC2 = OpcaoC;
            }

            contaC++;
          }
          break;

        case 4:

          cout << "\n-------------------\nSeu limite atual " << e_agudo << " de 2 Prote" << i_agudo << "nas." << endl;

          while (contaP < 2)
          {
            cout << "Valor atual da sess" << a_tio << "o de bases: R" << S << "" << valorIntP << endl;
            cout <<  "Prote" << i_agudo << "na "  << contaP + 1 << "/2";

            cout << "\n F - Frango Grelhado (+R" << S << "1,50);\n" <<
            " S - Salm" << a_tio << "o (+R" << S << "3,00);\n" <<
            " A - Atum;\n" <<
            " O - Ovo de Codorna\n-------------------\n";
            cin >> OpcaoP;

            if (OpcaoP == 'F')
            {
              valor = valor + 6.5;
              valorIntP = valorIntP + 6.5;
            }

            if (OpcaoP == 'S')
            {
              valor = valor + 8;
              valorIntP = valorIntP + 8;
            }

            if (OpcaoP == 'A')
            {
              valor = valor + 5;
              valorIntP = valorIntP + 5;
            }

            if (OpcaoP == 'O')
            {
              valor = valor + 5;
              valorIntP = valorIntP + 5;
            }

            if (contaP == 0)
            {
              guardaP1 = OpcaoP;
            }

            if (contaP == 1)
            {
              guardaP2 = OpcaoP;
            }

            contaP++;
          }
          break;

        case 5:

          cout << "\n-------------------\nVoc" << e_circ << " pode escolher um nut." << endl;

          while (contaN < 1)
          {
            cout << "\n A - Amendoim;\n" <<
            " C - Castanha de Caju (+R" << S << "1,50);\n" <<
            " M - Milho crunch\n-------------------\n";
            cin >> OpcaoN;

            if (OpcaoN == 'A')
            {
              valor = valor + 2;
              valorIntN = valorIntN + 2;
              
            }

            if (OpcaoN == 'C')
            {
              valor = valor + 3.5;
              valorIntN = valorIntN + 3.5;
            }

            if (OpcaoN == 'M')
            {
              valor = valor + 2;
              valorIntN = valorIntN + 2;
            }

            contaN++;
          }

          break;

          case 6:

          cout << "\n-------------------\nVoc" << e_circ << " pode escolher um molho." << endl;

          while (contaM  < 1)
          {
            cout << "\n M - Mostarda e Mel (+R" << S << "1,00);\n" <<
            " S - Shoyo;\n" <<
            " T - Tar" << e_circ << "\n-------------------\n";
            cin >> OpcaoM;

            if (OpcaoM == 'M')
            {
              valor = valor + 3;
              valorIntM = valorIntM + 3;
            }

            if (OpcaoM == 'S')
            {
              valor = valor + 2;
              valorIntM = valorIntM + 2;
            }

            if (OpcaoM == 'T')
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

          cout << "\nInv" << a_agudo << "lido\n";

          break;
        }

      }
    } else

    if (OpcaoMontar == 2)
    {
      cout << "-------------------\nVoc" << e_circ << " escolher" << a_agudo << " seu poke!\n-------------------\n";

      cout << "Temos algumas op" << c << o << "es:\n" <<
      "-------------------\n1. PIKACHU (R" << S << "40,00)\n\n" <<
      "  Espaguete, abacaxi, tomate cereja, chips de mandioca,\n  frango grelhado, milho crunch, mostarda e mel\n\n" <<
      "-------------------\n2. GYARADOS (R" << S << "43,00)\n\n" <<
      "  Arroz, sunomono, cream cheese, palha de nori, cebola crispy\n  salm" << a_tio << "o, atum, castanha de caju, shoyo\n\n" <<
      "-------------------\n3. SNORLAX (R" << S << "44,00)\n\n" <<
      "  Espaguete, arroz, cream cheese, kiwi, chips de mandioca, palha de nori,\n  frango grelhado, ovo de codorna, amendoim, mostarda e mel\n\n" <<
      "-------------------\n4. BULBASSAUR (R" << S << "42,00)\n\n" <<
      "  Mix de Folhas, sunomono, tomate cereja, kiwi, palha de nori,\n  ovo de codorna, castanha de caju, tar" << e_circ << "\n\n" <<
      "-------------------\n5. DITTO (R" << S << "44,00)\n\n" <<
      "  Mix de folhas, arroz, kiwi, abacaxi, tomate cereja, chips de mandioca,\n  cebola crispy, atum, milho crunch, shoyo\n\n" <<
      "-------------------\n6. GENGAR (R" << S << "45,00)\n\n" <<
      "  Espaguete, mix de folhas, sunomono, cream cheese, cebola crispy,\n  salm" << a_tio << "o, frango grelhado, amendoim, tar" << e_circ << "\n\n-------------------\n";
      cin >> opcoesProntas;

      switch (opcoesProntas)
      {
      case 1:
        cout << "-------------------\nOp" << c << a_tio << "o escolhida: PIKACHU";
        valorCadaPoke = valorCadaPoke + 40;
        valor = valor + 40;
        break;
      
      case 2:
        cout << "-------------------\nOp" << c << a_tio << "o escolhida: GYARADOS";
        valorCadaPoke = valorCadaPoke + 43;
        valor = valor + 43;
        break;

      case 3:
        cout << "-------------------\nOp" << c << a_tio << "o escolhida: SNORLAX";
        valorCadaPoke = valorCadaPoke + 44;
        valor = valor + 44;
        break;

      case 4:
        cout << "-------------------\nOp" << c << a_tio << "o escolhida: BULBASSAUR";
        valorCadaPoke = valorCadaPoke + 42;
        valor = valor + 42;
        break;

      case 5:
        cout << "-------------------\nOp" << c << a_tio << "o escolhida: DITTO";
        valorCadaPoke = valorCadaPoke + 44;
        valor = valor + 44;
        break;

      case 6:
        cout << "-------------------\nOp" << c << a_tio << "o escolhida: GENGAR";
        valorCadaPoke = valorCadaPoke + 45;
        valor = valor + 45;
        break;
      
      default:
        cout << "Inv" << a_agudo << "lido";
        break;
      }
    }

    switch (OpcaoTamanho)
    {
      case 'N':
      
      if(OpcaoMontar == 1)
      {
        cout << "\n-------------------\nVoc" << e_circ << " escolheu um Poke NORMAL com as seguintes op" << c << o << "es:\n\n";
      }

      if(OpcaoMontar == 2)
      {
        cout << "\n-------------------\nTamanho: Poke NORMAL\n\n";
      }
      
      break;

      case 'L':

        if(OpcaoMontar == 1)
        {
        cout << "\n-------------------\nVoc" << e_circ << " escolheu um Poke LEND" << A_agudo << "RIO com as seguintes op" << c << o << "es:\n\n";
        }

        if(OpcaoMontar == 2)
        {
        cout << "\n-------------------\nTamanho: Poke LEND" << A_agudo << "RIO\n\n";
        }

        valor = valor + 3;
        valorCadaPoke = valorCadaPoke + 3;
      
      break;

      case 'M':

        if(OpcaoMontar == 1)
        {
        cout << "\n-------------------\nVoc" << e_circ << " escolheu um Poke M" << I << "TICO com as seguintes op" << c << o << "es:\n\n";
        }

        if(OpcaoMontar == 2)
        {
        cout << "\n-------------------\nTamanho: Poke M" << I << "TICO\n\n";
        }

        valor = valor + 6;
        valorCadaPoke = valorCadaPoke + 6;
      
      break;
    }

    if(OpcaoMontar == 1)
    {
      cout << "-------------------\nBases - (R" << S << "" << valorIntB << "):\n\n";

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


      cout << "-------------------\nToppings - (R" << S << "" << valorIntT << "):\n\n";

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


      cout << "-------------------\nCrunches - (R" << S << "" << valorIntC << "):\n\n";

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


      cout << "-------------------\nProte" << i_agudo << "nas - (R" << S << "" << valorIntP << "):\n\n";

      if (guardaP1 == 'F')
      {
        cout << "Frango Grelhado;\n";
      }

      if (guardaP1 == 'S')
      {
        cout << "Salm" << a_tio << "o;\n";
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
        cout << "Salm" << a_tio << "o;\n";
      }

      if (guardaP2 == 'A')
      {
        cout << "Atum;\n";
      }

      if (guardaP2 == 'O')
      {
        cout << "Ovo de Codorna;\n";
      }


      cout << "-------------------\nNut - (R" << S << "" << valorIntN << "):\n\n";

      if (OpcaoN == 'A')
      {
        cout << "Amendoim;\n";
      }

      if (OpcaoN == 'C')
      {
        cout << "Castanha de Caju;\n";
      }

      if (OpcaoN == 'M')
      {
        cout << "Milho Crunch;\n";
      }


      cout << "-------------------\nMolho - (R" << S << "" << valorIntM << "):\n\n";

      if (OpcaoM == 'M')
      {
        cout << "Mostarda e Mel;\n";
      }

      if (OpcaoM == 'S')
      {
        cout << "Shoyo;\n";
      }

      if (OpcaoM == 'T')
      {
        cout << "Tar" << e_circ << ";\n";
      }

      cout << "-------------------\n";
    }


    valorCadaPoke = valorCadaPoke + valorIntB + valorIntC + valorIntM + valorIntN + valorIntP + valorIntT;

    if (qtdPratos > 1)
    {
      cout << "O Poke " << i + 1 << " ficou no valor de: R" << S << "" << valorCadaPoke << "\n-------------------\n\n";
    }

      i++;

    }
    
    cout << "-------------------\nSeu pedido ficou no valor total de: R" << S << "" << valor << "\n-------------------";

}
