help :
	@echo "Cibles disponible :"
	@echo "	 - test01 : génère un programme de test d'affichage de version"
	@echo "	 - test02 : génère un programme de test de création et affichage de liste"
	@echo "	 - test03 : génère un programme de test d'insertion, remplacement et suppression dans une liste"
	@echo "	 - help : affichage de cette aide"
		
test01 : lib/liste-c.o test/test01.c
	gcc -Wall test/test01.c lib/liste-c.o -o build/test01

test02 : lib/liste-c.o test/test02.c
	gcc -Wall test/test02.c lib/liste-c.o -o build/test02

test03 : lib/liste-c.o test/test03.c
	gcc -Wall test/test03.c lib/liste-c.o -o build/test03
