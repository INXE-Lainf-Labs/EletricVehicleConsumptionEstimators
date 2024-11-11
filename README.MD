# Introdução

<p>Este repositório tem a funcionalidade de armazenar códigos desenvolvidos para o atendimento do projeto Descarbonize AI (DCAI). Os trechos aqui presentes buscam a criação de um produto mínimo viável (MVP) da aplicação que se busca entregar. Para tanto, foram separadas as 6 seguintes etapas:</p>

* Coleta de dados de consumo de veículos elétricos.
* Tratamento dos dados coletados.
* Estimação de rótulos de emissões equivalentes.
* Treinamento de modelos de Machine Learning para emissões equivalentes.
* Portabilidade do modelo para coleta e predição on-board.
* Realização das predições on-board.

<p>Isto posto, devido à falta de meios para a coleta de dados de veículos elétricos diretamente, a primeira etapa foi substituída pela utilização de datasets semelhantes públicos na internet. Os dados foram tratados minimamente para possibilitar a criação do MVP, uma vez que os dados podem nem ao menos ter as mesmas features que o dataset final do produto.</p>
<p>Foi construído um pipeline de criação/treinamento de modelos, assim como de busca de hyperparâmetros com as bibliotecas Sklearn e TensorFlow. A motivação do uso das duas bibliotecas se encontra no notebook correspondente.</p>
<p>Por fim, os modelos foram portados para a arquitetura esp32, utilizando a biblioteca EloquentTinyML. Observe que modelos mais simples não precisam dessa estrutura de portabilidade, podendo ser portadas diretamente em códigos.</p>


# Arquivos

<p>Este repositório possui duas seções importantes de arquivos:</p>

* A primeira é composta pelo arquivo de notebook do jupyter, chamado eVED.ipynb. Este arquivos guarda todo o pipeline da obtenção dos dados até a portabilidade para a arquitetura alvo.
* A segunda é composta pelos projetos para a realização das predições diretamente em arquiteturas embarcadas. Esta parte se encontra no diretório Esp32Models, no qual há dois sub-diretórios DecisionTree e MLP. O primeiro sub-diretório demonstra a primeira forma de portar os modelos gerando diretamente os códigos em C. O segundo sub-diretório, chamado MLP, demostra a portabilidade utilizando o EloquentTinyML.

# Dados

<p>Os dados utilizados para este projeto são oriundos do repositório https://github.com/zhangsl2013/eVED , podendo ser obtidos diretamente na clonagem do respectivo repositório.</p>
