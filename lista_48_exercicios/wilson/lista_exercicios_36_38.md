Exercício 36:
Classificação de Paridade e Censo Numérico
O programa deve receber um número inteiro positivo K e examinar todos os números inteiros situados no intervalo fechado de 1 até K. No corpo de um laço for, uma estrutura condicional interna baseada no operador módulo % 2 deve classificar cada elemento da iteração, incrementando contadores específicos para números pares e números ímpares e exibindo, ao final, o censo numérico apurado.

Exercício 37:
Produtório Fatorial de Inteiros Positivos
O programa deve capturar um número inteiro não negativo n e calcular o seu respectivo valor fatorial (n!). O algoritmo deve inicializar uma variável acumuladora de produto em 1 e iterar com for desde o valor n até 1 de forma decrescente, multiplicando sucessivamente os fatores intermediários e exibindo o resultado numérico final.

Exercício 38: 
Mapeamento de Múltiplos Concomitantes e Divisibilidade Composta
O programa deve iterar de forma fixa sobre todos os inteiros contidos no intervalo de 1 a 100 utilizando um laço for. A cada ciclo, uma condição composta com o operador lógico && deve verificar se o número corrente é simultaneamente divisível por 3 e por 5; caso positivo, o número deve ser impresso e somado a um acumulador geral, exibindo ao término do laço o total acumulado.

Exercício 39:
Rastreio de Extremos Térmicos em Registros Meteorológicos
O programa deve simular a coleta diária de temperaturas ao longo de uma semana completa, realizando sete iterações contadas com um laço for. Na primeira repetição, a leitura inicializa simultaneamente as variáveis que guardam a temperatura máxima e a mínima; nas repetições seguintes, comparações condicionais ajustam os valores extremos com base nas novas leituras, apresentando ao final os extremos térmicos apurados no período.

Exercício 40:
Síntese de Progressões Aritméticas Lineares
O programa deve ler o valor do termo inicial a₁, a razão de progressão r e o total de termos desejado N (todos inteiros). Através de um laço for que itera pelo índice i variando de 0 até N - 1, o programa deve calcular cada termo sucessivo pela fórmula clássica do termo geral aₙ = a₁ + (i × r), exibindo a sequência matemática formatada em uma linha contínua separada por vírgulas.

Exercício 41: 
Acumulador Aritmético Controlado por Sentinela Nulo
O programa deve capturar números inteiros de forma indeterminada a partir do teclado até que o usuário digite o número zero, que funciona como valor sentinela para encerrar a execução. O laço while (numero != 0) deve somar os valores válidos e incrementar uma variável contadora a cada iteração; ao término, o terminal exibe o total de números computados e o somatório acumulado, desconsiderando a sentinela nas estatísticas.

Exercício 42: 
Menu Interativo de Operações Matemáticas Recorrentes
O programa deve exibir repetidamente na tela um menu textual com opções de cálculo: código 1 para soma de dois números reais, código 2 para multiplicação e código 0 para encerramento do sistema. Estruturado com while (opcao != 0), o programa deve ler a escolha do usuário, executar a operação solicitada capturando os operandos pertinentes ou emitir um alerta em caso de opção inexistente, repetindo o ciclo até que o comando de saída seja fornecido.

Exercício 43: 
Auditoria Pedagógica com Duplo Nível de Média
O programa deve ler um valor inteiro N representando a quantidade de discentes em uma classe acadêmica e iterar exatamente esse número de vezes. Em cada repetição, o código captura duas notas para o aluno correspondente, calcula sua média aritmética individual, emite a mensagem de aprovação se a média for maior ou igual a 6.0 ou reprovação caso contrário, e acumula as médias parciais em uma variável global para calcular e exibir a média agregada de toda a classe ao final.

Exercício 44: 
Decomposição Logarítmica por Bisseções Inteiras Sucessivas
O programa deve solicitar a digitação de um número inteiro positivo expressivo (X > 1). Empregando o laço while (n > 1), o programa deve repetidamente dividir o valor por 2 através de atribuição truncada inteira (n = n / 2), incrementando um contador a cada operação de divisão até atingir a unidade, exibindo ao final a quantidade de bisseções sucessivas necessárias para esgotar o valor original.

Exercício 45: 
Validador de Entrada e Rejeição de Dados Inválidos
O programa deve simular a captura de uma nota de exame escolar assegurando que a nota informada esteja contida no intervalo fechado de 0.0 a 10.0. O programa deve manter o usuário preso em um laço de repetição while (nota < 0.0f || nota > 10.0f) que exibe uma mensagem de advertência e repete a leitura via scanf() a cada tentativa errônea, prosseguindo para o encerramento regular apenas após o fornecimento de um dado que cumpra os limites exigidos.

Exercício 46: 
Censo Demográfico Amostral com Encerramento por Sentinela Negativo
O programa deve processar dados amostrais de um grupo de cidadãos, coletando para cada entrevistado a sua idade (inteiro) e o seu respectivo salário mensal (ponto flutuante). A condição de permanência no laço while deve monitorar a idade, interrompendo a coleta assim que uma idade estritamente negativa for inserida; ao final, o algoritmo deve exibir a quantidade de cidadãos entrevistados, a média salarial da amostra e a maior idade encontrada.

Exercício 47: 
Simulação Iterativa de Convergência Demográfica
O país A possui uma população inicial de 80.000 habitantes crescendo a uma taxa de 3% ao ano, enquanto o país B conta com 100.000 habitantes expandindo-se a uma taxa anual de 1.5%. O programa deve empregar um laço while (popA <= popB) para simular o avanço anual simultâneo das duas populações por meio de juros compostos, contabilizando os ciclos decorridos e exibindo a quantidade de anos necessários para que o país A supere a população do país B, juntamente com as populações finais apuradas.

Exercício 48: 
Terminal Comercial Integrador de Ponto de Venda
O programa deve simular uma caixa registradora comercial processando pares de dados com código de item (inteiro) e preço unitário (ponto flutuante) até que o código sentinela 0 seja fornecido. Concluída a leitura dos itens, o sistema deve exibir o total bruto consolidado e ler a opção de quitação do cliente: se a opção for dinheiro em espécie (código 1), aplica-se um desconto de 5% sobre a compra e solicita-se o valor entregue para calcular o troco devido; se for cartão (código 2), cobra-se o valor nominal sem bonificações, imprimindo ao término o extrato fiscal da transação.
