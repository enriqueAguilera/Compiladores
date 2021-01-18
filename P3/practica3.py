from Automatas import AFN
from Automatas import AFD


class Thompson(AFN):

	def __init__(self,AFN):
	        self.AFN = AFN
 	        self.AFD = self.conversionAFD()

	def obtenerInicial(self):
		posicion=self.AFN[0]
		inicial=int(self.posicion[8:])
		return inicial
	
	def obtenerFinal(self):
		posicion=self.AFN[1]
		final=int(posicion[8:])
		return final

	def obtenerE0(self):
		lenguaje=self.lenguaje
		AFN= self.AFN
		E0=[]
		for item in AFN[2:]:
			for transicion in item:
				if E in transicion:	
					E0.append(transicion)

		return E0	

	def obtenerLexico(self):
		lexico=[]
		for item in AFN[2]:
			lexico.append(item)
		return(lexico)
			
	def mover(self,T,s):
	        return filter(lambda m:m[0]==s,filter(lambda s:s[0]==T,self.AFN)[0])[0][1]
	
	def estadosRecorridos(self):
		recorridos=[]
		for item in self.ADF:
			recorridos.append(item)
		return(reocrridos)

	def estadosNoRecorridos(self):
		faltantes=[]
		for item in self.AFD:
			if item not in recorridos:
				faltantes.append(item)
		return(faltantes)

	def conversionAFD(self):
		self.AFD=AFD[]
		estados=len(AFN)
		estadoInicial=self.obtenerInicial()
		estadosFinales=self.obtenerFinal()
		e=obtenerE0
		while(estados) != 0:
			self.AFN.append(self.estados[0]) 
			for item in estadosNoRecorridos():
				AFDresultante=[]
				for letra in self.obtenerLexico():
					nuevoEstado=[]
					for e in estado
						for item in self.mover([e],letra):
							if item not in nuevoEstado:
								nuevoEstado.append(item)
					AFDresultante.append(letra,nuevoEstado)
			estados.append([estado]+TransaccionDelAFD)
			estados.pop(0)
			
			


