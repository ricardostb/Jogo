#pragma once
#include "Obstaculo.h"

namespace Entidades
{
	namespace Obstaculos
	{
		class Obstaculo_Medio : public Obstaculo
		{
		public:
			Obstaculo_Medio();
			~Obstaculo_Medio();
			void executar();
		};
	}
}