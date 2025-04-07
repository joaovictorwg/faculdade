# filepath: d:\Faculdade\Aprendizado de Maquinas\codigos\gemini\main.py
import google.generativeai as genai
from dotenv import load_dotenv
import os

# Carrega as variáveis do arquivo .env
load_dotenv()

# Obtém a chave da API do ambiente
api_key = os.getenv('API_KEY')

# Verifica se a chave da API foi carregada corretamente
if api_key is None:
    print("Erro: API_KEY não encontrada no arquivo .env")
else:
    print(f"API_KEY carregada: {api_key}")

try:
    # Use a chave da API conforme necessário
    genai.configure(api_key=api_key)
    model = genai.GenerativeModel("gemini-1.5-flash")
  
    user_input = input("Digite seu texto aqui: ")
    response = model.generate_content(user_input)
    print(response.text)
except Exception as e:
    print(f"Erro: {e}")
