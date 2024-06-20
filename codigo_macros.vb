Sub RegistrarEstudiante()
    Dim HojaRegistro As Worksheet
    Dim HojaEstudiantes As Worksheet
    Dim no_fila As Long
    
    Set HojaRegistro = ThisWorkbook.Sheets("Registro")
    Set HojaEstudiantes = ThisWorkbook.Sheets("Estudiantes")
    
    '''Copiamos los datos
    no_fila = HojaEstudiantes.Cells(Rows.Count, 1).End(xlUp).Row + 1
    With HojaEstudiantes
        .Cells(no_fila, 1).Value = HojaRegistro.Range("C2").Value
        .Cells(no_fila, 2).Value = HojaRegistro.Range("C4").Value
        .Cells(no_fila, 3).Value = HojaRegistro.Range("C6").Value
        .Cells(no_fila, 4).Value = HojaRegistro.Range("C8").Value
    End With
    
    MsgBox "Estudiante Registrado", vbInformation, "Aprendiendo Macros"
    
    With HojaRegistro
        .Range("C2").Value = Empty
        .Range("C4").Value = Empty
        .Range("C6").Value = Empty
        .Range("C8").Value = Empty
    End With
End Sub
