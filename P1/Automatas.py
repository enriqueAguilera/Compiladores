class AFN:
	def __init__(self,inicial, final, estados_origen, estado_destino, transicion, estados_posibles):
		self.inicial = inicial
		self.final = final
		self.estados_origen = estados_origen
		self.estado_destino = estado_destino
		self.transicion = transicion
		self.estados_posibles = estados_posibles
	
	def establecer_inicial(Nuevo_inicial,Estados):
		if Nuevo_inicial in Estados:
			self.inicial=Nuevo_inicial
		else:
			self.inicial=self.inicial

	def establecer_finales(Nuevo_final,Estados):
		if Nuevo_final in Estados:
			self.final=Nuevo_final
		else:
			self.final=self.final

	def agregar_transicion(Origen,Destino,Simbolo):
		if Origen in estados_posibles:
			estados_origen.append(Origen)
			estados_destino.append(Destino)
			transicion.append(simbolo)
	
	


	
	def guardar_en(Nombre):
		archivo=open(nombre,"w")
		archivo.write("inicio:"+self.inicial+"\nfinal:"+self.final+"\n")
		for item in self.origen,self.destino,self.transiciones:
			archivo.write(origen[item]+"->"+destino[item]+","+transiciones[item]+"\n")
		archivo.close()

	def esAFN():
		if E in self.transicion:
			return true
		else:	
			return false

	def esAFD():
		if E in self.transicion:
			return false
		else:	
			return true

	def eliminar_transicion(Origen,Destino,Simbolo):
		if(self.estados_origen.index(Origen,Destino,Simbolo)):
			Eliminar_porIndice = self.estados_origen.index(Origen,Destino,Simbolo)
			self.estados_origen.remove(Eliminar_porIndice)



def cargar_desde(Documento):
	Lista_con_saltos=[]
	Lista_limpia=[]
	estados_origen=[]
	estado_destino=[]
	estados_posibles=[]
	transicion=[]


	#inicia la lectura del archivo
	with open(Documento) as automata:
		for linea in automata:
			Lista_con_saltos.append(linea)
	for item in Lista_con_saltos:#limpiamos los saltos de linea y los asignamos a una lista limpia
		Lista_limpia.append((item.rstrip()))

	inicial=obtener_inicial(Lista_limpia)#llamado funcion para obtener estado inicial
	final=obtener_final(Lista_limpia)#llamado a funcion para obtener estado(s) finales
	
	for linea in Lista_limpia[2:]:#los transiciones inician desde la linea 2 en el archivo por eso iniciamos desde la linea 2 en adelante
		linea=linea.replace("->",",")#remplazamos -> para que sea mas facil manejar los valores separados por coma
		linea=linea.split(",") #separamos los valores por comas
		estados_origen.append(int(linea[0]))#los estados de origen simpre estan en la linea 0
		estado_destino.append(int(linea[1]))#los estados de destino simpre estan en la linea 1
		transicion.append(linea[2])#las transiciones simpre estan en la linea 2
		estados_posibles=list((set(estados_origen)))#creamos una lista que contiene todos los estados que existen en 
	
	return AFN(inicial,final,estados_origen,estado_destino,transicion,estados_posibles)


#------------------------------------------------------------------
def obtener_inicial(Lista):
	Inicio=Lista[0]
	inicial=int(Inicio[8:])
	return inicial
#--------------------------------------------------------------------
def obtener_final(Lista):
	Finales=Lista[1]
	final=int(Finales[8:])
	final=final
	return final



		
		
	


cargar_desde("Automata.af")
	
