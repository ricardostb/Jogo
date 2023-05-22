#pragma once
#include <SFML/Graphics.hpp>

namespace Gerenciadores
{
	class Gerenciador_Grafico
	{
	private:
		static Gerenciador_Grafico* instancia;
		Gerenciador_Grafico();
	private:
		sf::RenderWindow janela;
	public:
		Gerenciador_Grafico(const Gerenciador_Grafico* obj) = delete;
		~Gerenciador_Grafico();
		static Gerenciador_Grafico* getInstancia();
		//void desenharEnte(Ente* pE);
		void executar();
	};
}