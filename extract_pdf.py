
from PyPDF2 import PdfReader

pdf_path = "Copy of PC LAB.pdf"
reader = PdfReader(pdf_path)

text = ""
for page in reader.pages:
    text += page.extract_text()

print(text)
