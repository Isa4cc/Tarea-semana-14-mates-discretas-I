### NOTAS

- Código hecho en su mayoría por Inteligencia Artificial (Copilot, ChatGTP)
- Evitar tocar el archivo funciones.h.txt, a menos de saber qué se está haciendo.
- El error que no permitía leer la cadena (o al menos en mi caso, creo que depende de cómo se tiene instalados los depuradores/compiladores de C en VScode)
    - Sucedía por que al leer un float o int y luego leer un char, generaba que scanf lea el último "\n". Por eso toacaba usar
    - una función llamada getchar, simplemente en una línea agregando "getchar();"
 
 # Y ya jaja xdd 
