# Interseção de RGAs - FACOM/UFMS

**Programador:** Marcelo Emanoel  
**Curso:** Engenharia de Computação - UFMS  
**Disciplina:** Algoritmos e Programação II  
**Data:** 23/03/2025

## 🧠 Descrição

Este programa resolve o problema da **interseção entre duas listas de matrículas de alunos (RGAs)** cursando duas disciplinas distintas. Cada lista contém inteiros de 5 dígitos representando o RGA dos alunos. O objetivo é imprimir os alunos que estão **matriculados simultaneamente** em ambas as disciplinas.

---

## 📥 Entrada

A entrada é composta por 4 linhas:

1. Um inteiro `tamA`: número de alunos na disciplina A  
2. `tamA` RGAs (números inteiros)  
3. Um inteiro `tamB`: número de alunos na disciplina B  
4. `tamB` RGAs (números inteiros)

---

## 📤 Saída

- Caso exista interseção, o programa imprime os RGAs em comum **separados por espaço**, com espaço **após o último elemento**, seguido de **quebra de linha**.
- Se não houver interseção, imprime **vazia** seguido de quebra de linha.

---

## ✅ Exemplo

### Entrada:
```
5  
11111 11222 12333 12444 13555  
4  
11101 11222 12333 12401
```

### Saída:
```
11222 12333 
```

---

## ⚙️ Implementação em C

Arquivo: `intersecao_rga_facom.c`

- Usa vetores para armazenar os RGAs
- Utiliza comparação simples com `for` aninhado
- Remove duplicidade com `break`
- Imprime corretamente os dados com formatação conforme especificação

---

## 🧪 Observação

O código foi testado com sucesso, mas a plataforma de correção automática apresentou divergência de validação possivelmente por problemas de:

- Comparação com `\r\n` em vez de `\n`
- Sensibilidade de espaços ou ordenação não especificada
- Problemas no gabarito oculto da plataforma

---

## 🧠 Conclusão

Exercício útil para treinar lógica de comparação entre listas, vetores, estruturas de controle e saída formatada.  
Foi submetido com documentação completa e contestação formal à docente devido à inconsistência na avaliação automatizada.

---

**Marcelo Emanoel – Engenharia de Computação – FACOM/UFMS**
