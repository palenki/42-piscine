# Por convenção CC é uma variavel padrão para substituir o nome do compilador em Makefiles.
CC = gcc

#CFLAGS é outra variavel padrão para as flags do compilador (opções de compilação).
CFLAGS = -Wall -Wextra -Werror

#Diretório onde os arquivos-fonte (.c) estão.
DIR_SRCS = srcs

#Diretório onde estão os header files.
DIR_INCS = includes

#Nome do arquivo final que será gerado.
#A extenção .a -Archive(arquivo de biblioteca estática).
#Nele conterá as funções compiladas prontas para uso em outros programas.
NAME = libft.a

#SRCS vai ser a variavel para significar Sources(arquivos-fonte)
#Os arquivos estão separados por espaço.
#O make entende que eles são arquivos diferentes assim.
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

#Como esses arquivos não estão soltos na raiz.
#É necessário falar o caminho de cada um deles.
#Exemplo: srcs/ft_putchar.c srcs/ft_putstr.c ...
#Para facilitar usamos uma função do próprio make (addprefix)
#$ e os () dizem ao make para executar essa função ou chamar a variavel dentro dela.
#Caso contrário ele leria como texto puro.
#Essa função adiciona o primeiro argumento $(DIR_SRCS)/ como prefixo do segundo (separado por virgula).
SRCS_PREFIXED = $(addprefix $(DIR_SRCS)/, $(SRCS))

#OBJS será a variavel que guardará os arquivos .o
#$() -> diz ao make para executar o que tem dentro dos parenteses.
# O caractere : inicia a alteração de sufixo.
OBJS = $(SRCS_PREFIXED:.c=.o)

#all é o target (alvo) padrão do make, regra de execução.
#Quando digitamos só make no terminal ele executa o bloco de comandos desse alvo.
#Os dois pontos (:) servem para separar as suas dependencias.
#Ele para executá-lo ele precisa primeiro que o que esteja a direita esteja pronto.
#Ou seja, "para rodar o all, garanta primeiro que o arquivo libft.a foi criado"
all: $(NAME)

#Agora ensinamos o Makefile a construir a libft.a
#Para criar a libft.a a dependencia é que os arquivos.o sejam gerados.
#ar é o utilitario do sistema que cria biblioteca estática.
#rcs são as flags desse comando (-r replace substitui ou adiciona os arquivos .o dentro do pacote)
#(-c crate cria a biblioteca) 
#(-s sort/index cria o indice com os nomes das funções dentro da lib agilizando a velociade do linkador)
#O primeiro argumento $(NAME) será o nome, o segundo é a lista de arquivos.o que serão compactados n lib
#A tabulação é necessária para o make entender que é a instrução para o terminal.
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#Aqui faremos o make transformar cada arquivo.c em um arquivo.o dentro do diretorio certo.
#O primeiro alvo diz pro make procurar ou gerar os arquivos na pasta certa (srcs/)
#O % é um wildcard assim como o *, diz todos os arquivos .o
#Que são os arquivos que quero gerar
#A dependencia é diz para ele procurar arquivos .c de mesmo nome dentro do outro diretorio
#Todo comando precisa ter uma tabulação
#-I é a flag que diz para ele procurar os headers files no diretorio que o vem a seguir
#-c diz para o compilador não criar o executavel, somente os arquivos.o objetos
#$< variavel automatica do make que representa a primeira dependencia da regra atual
#no caso ft_putchar vira srcs/ft_putchar.c
#-o o nome do arquivo de saida
#%@ variavel automatica do make que representa exatamente o nome do alvo da regra atual
#no caso srcs/ft_putchar.o
#ficaria: gcc -Wall -Wextra -Werror -I includes -c srcs/ft_putchar.c -o srcs/ft_putchar.o
#Como o make ve que ele precisa criar os outros arquivo.o
#ele continua e o $< e o $@ viram os nomes dos demais arquivos um de cada vez
#Assim ele também consegue avaliar quando você da um novo make se algum dos arquivos foi alterado
#E só compila ele e os outros ele não faz nada
$(DIR_SRCS)/%.o: $(DIR_SRCS)/%.c
	$(CC) $(CFLAGS) -I $(DIR_INCS) -c $< -o $@

#Como os nomes dos comandos já estão declarados no .PHONY não haverá nenhum erro ao usar essa comando
#Como depois do :(dependencia) não tem nada ele entende que o comando pode ser executado imediatamente
clean:
	rm -f $(OBJS)

#full clean, ele apaga os arquivos .o e também a libft.a
#Assim uso o próprio clean como dependencia, ele executará ele antes de fazer a linha de comando.
fclean: clean
	rm -f $(NAME)

#Essa regra é a re-link ou recompile. Ela faz o mesmo que a fclean, seguido de um make
re: fclean
	make all

#.PHONY é key-word do make.
#Ela avisa ao make que as palavras que a seguem são comandos(regras) e não arquivos.
#Então caso exista algum arquivo com esses nomes.
#Na hora da compilação o make não considerará ele e sim o comando.
.PHONY: all clean fclean re
