all: compile link execute

compile: 
	g++ -c source\*.cpp source\Entidades\*.cpp source\Entidades\Obstaculos\*.cpp source\Entidades\Personagens\*.cpp source\Gerenciadores\*.cpp -I"SFML\include"

link:
	g++ *.o -Wall -o main -L"SFML\lib" -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

execute:
	.\main.exe