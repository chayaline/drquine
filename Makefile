define \n


endef
SRC = Colleen.c Grace.c Sully.Colleen
OBJ = $(SRC:.c=.o)
NAME = $(SRC:.c=)
CFLAGS = -Wall -Wextra -Werror

all:
	@$(MAKE) Colleen
	@$(MAKE) Grace
	@$(MAKE) Sully

test:
	@echo "\033[34mTesting Colleen \033[33m output checkable in tmp Colleen\033[0m"
	@./Colleen > tmp_Colleen
	diff Colleen.c tmp_Colleen
	@echo ${\n}
	@echo "\033[34mTesting Grace\033[0m"
	@./Grace
	diff Grace_kid.c Grace.c
	@echo ${\n}
	@echo "\033[34mTesting Sully \033[33m plus multiple diffs with Sully.c and a final grep, enjoy\033[0m"
	mkdir -p tmp ; cp Sully tmp; cd tmp; ./Sully
	cd tmp ; for number in {5..0} ; do diff ../Sully.c Sully_$$number.c ||: ; done
	@echo ${\n}
	cd tmp ; ls -la | grep Sully | wc -l

clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[31mClean \033[32mDone\033[0m"

fclean: clean
	@/bin/rm -rf Sully ./tmp tmp_Colleen Colleen Grace_kid.c Grace
	@echo "\033[31mFclean\033[32m Done\033[0m"

re:
	@$(MAKE) fclean
	@$(MAKE) all
	@echo "\033[34mRe\033[33mDone\033[0m"

.PHONY: all clean fclean re test