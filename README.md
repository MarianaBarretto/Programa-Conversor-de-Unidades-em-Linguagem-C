<h2>🔥 Embarca Tech – Programa Conversor de Unidades em Linguagem C</h2>
<p>Repositório destinado à criação de um Programa Conversor de Unidades em Linguagem C. O objetivo deste projeto é desenvolver um programa que permita a conversão entre diversas unidades de medida, como comprimento, peso, temperatura, entre outras, utilizando a linguagem C.</p>

<h2>Funções e Membros</h2>
<table border="1">
    <tr>
        <td>Líder: </td>
        <td>Mariana Barretto</td>
    </tr>
    <tr>
        <td>1. Unidades de comprimento (metro, centímetro, milímetro): </td>
        <td>Alexandro Soares</td>
    </tr>
    <tr>
        <td>2. Unidades de massa (quilograma, grama, tonelada): </td>
        <td>Israel Falcão</td>
    </tr>
    <tr>
        <td>3. Unidades de volume (litro, mililitro, metros cúbicos): </td>
        <td>Lucas Moreira</td>
    </tr>
    <tr>
        <td>4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin): </td>
        <td>Helen Santos</td>
    </tr>
    <tr>
        <td>5. Unidades de velocidade (km/h, m/s, mph): </td>
        <td>Kauan Farias</td>
    </tr>
    <tr>
        <td>6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp): </td>
        <td>Edna Rodrigues</td>
    </tr>
    <tr>
        <td>7. Unidades de área (metro quadrado, centímetro quadrado): </td>
        <td>Ylo Bittencourt</td>
    </tr>
    <tr>
        <td>8. Unidades de tempo (segundos, minutos, horas): </td>
        <td>Mariana Barretto</td>
    </tr>
    <tr>
        <td>9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB): </td>
        <td>Daniel Santos</td>
    </tr>
    <tr>
        <td>10. Interface de usuário: </td>
        <td>Mariana Barretto</td>
    </tr>
</table>

<h2>🖥️ Tecnologias Utilizadas</h2>
<ul>
    <li><h4>📌 C</h4></li>
    <li><h4>📌 VSCode</h4></li>
    <li><h4>📌 HTML</h4></li>
</ul>

<h2>📝 Explicação do Código conversor_unidades</h2>

<h3>1. Inclusão de Bibliotecas</h3>
<pre><code>#include &lt;assert.h&gt;</code></pre>
<p>A biblioteca <code>assert.h</code> fornece uma macro chamada <code>assert</code>, usada para verificar expressões lógicas durante a execução de um programa, especialmente em cenários de depuração. Útil para a verificação e validação se condições lógicas no código são verdadeiras automaticamente.</p>
<pre><code>#include &lt;stdio.h&gt;</code></pre>
<p>A biblioteca <code>stdio.h</code> é incluída para permitir o uso de funções de entrada e saída, como <code>printf</code> (para exibir mensagens) e <code>scanf</code> (para ler entradas do usuário).</p>
<pre><code>#include &lt;math.h&gt;</code></pre>
<p>A biblioteca <code>math.h</code> fornece funções matemáticas avançadas, como operações trigonométricas, exponenciais, logaritmos, etc. Necessária para operação <code>fabs</code> (valor absoluto de números em ponto flutuante).</p>

<h3>2. Funções de Conversão</h3>

<h4>2.4. Funções de Conversão de Temperatura</h4>
<p>As funções abaixo são responsáveis por realizar as conversões entre diferentes unidades de temperatura:</p>
<ul>
    <li><strong>celsius_para_fahrenheit</strong>: Converte Celsius para Fahrenheit, utilizando a fórmula \( F = (C \times 9/5) + 32 \).</li>
    <li><strong>celsius_para_kelvin</strong>: Converte Celsius para Kelvin, somando 273.15 ao valor de Celsius.</li>
    <li><strong>fahrenheit_para_celsius</strong>: Converte Fahrenheit para Celsius, utilizando a fórmula \( C = (F - 32) \times 5/9 \).</li>
    <li><strong>fahrenheit_para_kelvin</strong>: Converte Fahrenheit para Kelvin, utilizando a fórmula \( K = (F - 32) \times 5/9 + 273.15 \).</li>
    <li><strong>kelvin_para_celsius</strong>: Converte Kelvin para Celsius, subtraindo 273.15 do valor de Kelvin.</li>
    <li><strong>kelvin_para_fahrenheit</strong>: Converte Kelvin para Fahrenheit, utilizando a fórmula \( F = (K - 273.15) \times 9/5 + 32 \).</li>
</ul>

<h4>2.6. Funções de Conversão de Potência</h4>
<p>As funções abaixo são responsáveis por realizar as conversões entre diferentes unidades de potência:</p>
<ul>
    <li><strong>watts_para_kilowatts</strong>: Converte watts para quilowatts, dividindo o valor de watts por 1000,0.</li>
    <li><strong>watts_para_cavalo_vapor</strong>: Converte watts para cavalo-vapor, dividindo o valor de watts por 735,50.</li>
    <li><strong>kilowatts_para_watts</strong>: Converte quilowatts para watts, multiplicando o valor de quilowatts por 1000,0.</li>
    <li><strong>kilowatts_para_cavalo_vapor</strong>: Converte quilowatts para cavalo-vapor, multiplicando o valor de quilowatts por 1000,0 e dividindo por 735,50.</li>
    <li><strong>cavalo_vapor_para_watts</strong>: Converte cavalo-vapor para watts, multiplicando o valor de cavalo-vapor por 735,50.</li>
    <li><strong>cavalo_vapor_para_kilowatts</strong>: Converte cavalo-vapor para quilowatts, multiplicando o valor de cavalo-vapor por 735,50 e dividindo por 1000,0.</li>
</ul>


<h4>2.8. Funções de Conversão de Tempo</h4>
<p>As funções abaixo são responsáveis por realizar as conversões entre diferentes unidades de tempo:</p>
<ul>
    <li><strong>segundos_para_minutos</strong>: Converte segundos para minutos, dividindo o valor de segundos por 60.</li>
    <li><strong>segundos_para_horas</strong>: Converte segundos para horas, dividindo o valor de segundos por 3600.</li>
    <li><strong>minutos_para_segundos</strong>: Converte minutos para segundos, multiplicando o valor de minutos por 60.</li>
    <li><strong>minutos_para_horas</strong>: Converte minutos para horas, dividindo o valor de minutos por 60.</li>
    <li><strong>horas_para_segundos</strong>: Converte horas para segundos, multiplicando o valor de horas por 3600.</li>
    <li><strong>horas_para_minutos</strong>: Converte horas para minutos, multiplicando o valor de horas por 60.</li>
</ul>

<h3>3. Funções para Testes das Funções de Conversão</h3>

<p>São funções específicas para cada função de conversão, usadas para verificar se as conversões estão corretas para valores padrões unitários. Se o valor calculado não estiver dentro da margem esperada, o programa encerrará e exibirá um erro.<p>

<h3>4. Funções para Mostrar Menu de Opções</h3>

<h4>4.4. Função <code>mostrar_menu_temperatura</code></h4>
<pre><code>void mostrar_menu_temperatura() {
    printf("Escolha a unidade de temperatura que deseja converter:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
}</code></pre>
<p>Esta função exibe um menu com as opções de unidades de temperatura para o usuário escolher. O menu apresenta três opções: Celsius, Fahrenheit e Kelvin.</p>

<h4>4.6. Função <code>mostrar_menu_potencia</code></h4>
<pre><code>void mostrar_menu_potencia() {
    printf("Escolha a unidade de potencia que deseja converter:\n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalo-vapor (CV)\n");
}</code></pre>
<p>Esta função exibe um menu com as opções de unidades de potencia para o usuário escolher. O menu apresenta três opções: Watts, Quilowatts e Cavalo-vapor.</p>

<h4>4.8. Função <code>mostrar_menu_tempo</code></h4>
<pre><code>void mostrar_menu_tempo() {
    printf("Escolha a unidade de tempo que deseja converter:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
}</code></pre>
<p>Esta função exibe um menu com as opções de unidades de tempo para o usuário escolher. O menu apresenta três opções: Segundos, Minutos e Horas.</p>

<h3>5. Função <code>mostrar_menu_principal</code></h3>
<pre><code>void mostrar_menu_principal() {
    printf("=================================================\n");
    printf("Escolha o tipo de conversão que deseja realizar:\n");
    printf("1. Conversão de Comprimento\n");
    printf("2. Conversão de Massa\n");
    printf("3. Conversão de Volume\n");
    printf("4. Conversão de Temperatura\n");
    printf("5. Conversão de Velocidade\n");
    printf("6. Conversão de Potência\n");
    printf("7. Conversão de Área\n");
    printf("8. Conversão de Tempo\n");
    printf("9. Conversão de Dados\n");
    printf("10. Sair\n");
    printf("=================================================\n");
}</code></pre>
<p>A função <code>mostrar_menu_principal</code> exibe o menu principal onde o usuário pode escolher entre realizar uma conversão de unidades diversos ou sair do programa.</p>

<h3>6. Função <code>main</code></h3>
<p>A função <code>main</code> é responsável por orquestrar o fluxo do programa. Ela exibe na interface do terminal os menus e permite que o usuário faça escolhas.</p>
<ul>
    <li><strong>Testes Automáticos</strong>:<br>
        Os testes garantem que as funções de conversão estão corretas antes de interagir com o usuário.
    </li>
    <li><strong>Declaração de Variáveis</strong>:<br>
        <code>opcao_principal</code>: Armazena a escolha do usuário no menu principal (variando de 1 a 10).<br>
        </li>
    <li><strong>Exibição do Menu Principal</strong>: O programa exibe o menu principal e o menu de conversão escolhido pelo usuário com a função <code>mostrar_menu_principal</code> e <code>mostrar_menu_{conversão}</code>, respectivamente.</li>
    <li><strong>Leitura da Entrada do Usuário</strong>: O programa lê as opções de menu e o valor a ser convertido, verificando se a entrada é válida.</li>
    <li><strong>Realização das Conversões</strong>: Dependendo da escolha do usuário no menu de conversão, o programa realiza a conversão do valor inserido e exibe os resultados.
    </li>
</ul>

<h3>7. Resultado das Conversões</h3>
<ul>
    <p>Ao escolher uma conversão a ser feita no menu principal, o usuário é direcionado ao menu secundário para escolha da unidade de medida a ser convertida. Com isso, os resultados serão impressos no terminal, assim como o menu principal para a próxima conversão. </p>
</ul>

<h2>Compilação e Execução do Programa</h2>
<p>1. <strong>Compilação</strong>: Para compilar o código, use o comando abaixo no terminal:</p>
<pre><code>gcc conversor_unidades.c -o conversor_unidades</code></pre>

<p>2. <strong>Execução</strong>: Após compilar, execute o programa com o comando:</p>
<pre><code>./conversor_unidades</code></pre>

<p>O programa pedirá para você escolher o tipo de conversor de unidades, e exibirá os resultados das conversões.</p>
