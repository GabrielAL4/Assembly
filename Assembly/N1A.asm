.data
	msg1: .asciiz "\nDigite a sua altura: "
	msg2: .asciiz "\nDigite o seu peso: "
	msg3:.asciiz"\nO IMC foi de: "
	msg4:.asciiz"\nMagreza Grave"
	msg5:.asciiz"\nMagreza Moderada"
	msg6:.asciiz"\nMagreza Leve"
	msg7:.asciiz"\nSaudavel"
	msg8:.asciiz"\nSobrepeso"
	msg9:.asciiz"\nObesidade I"
	msg10:.asciiz"\nObesidade II"
	msg11:.asciiz"\nObesidade III"
	num:.float 16.0
	num1:.float 17.0
	num2:.float 18.5
	num3:.float 25.0
	num4:.float 30.0
	num5:.float 35.0
	num6:.float 40.0
.text
main:
	l.s $f20, num
	l.s $f21, num1
	l.s $f22, num2
	l.s $f23, num3
	l.s $f24, num4
	l.s $f25, num5
	l.s $f26, num6
	
	li $v0, 4
	la $a0, msg1
	syscall
	
	li $v0, 6
	syscall
	mov.s $f1, $f0
	
	
	li $v0, 4
	la $a0, msg2
	syscall

	li $v0, 6
	syscall
	mov.s $f2, $f0
	
	mul.s $f13, $f1, $f1
	
	div.s $f14, $f2, $f13
	
	li $v0, 4
	la $a0, msg3
	syscall

	li $v0, 2
	mov.s $f12, $f14
	syscall
	
	
	c.lt.s $f14, $f20
	bc1t se1
	se1:
	li $v0, 4
	la $a0, msg4
	syscall
	j fimse

	
	c.le.s $f14, $f21
	bc1t se2
	se2:
	li $v0, 4
	la $a0, msg5
	syscall
	j fimse
	
	c.lt.s $f14, $f22
	bc1t se3
	se3:
	li $v0, 4
	la $a0, msg6
	syscall
	j fimse

	
	c.lt.s $f14, $f23
	bc1t se4
	se4:
	li $v0, 4
	la $a0, msg7
	syscall
	j fimse

	
	c.lt.s $f14, $f24
	bc1t se5
	se5:
	li $v0, 4
	la $a0, msg8
	syscall
	j fimse
	
	
	c.lt.s $f14, $f25
	bc1t se6
	se6:
	li $v0, 4
	la $a0, msg9
	syscall
	j fimse
	
	c.lt.s $f14, $f26
	bc1t se7
	se7:
	li $v0, 4
	la $a0,msg10
	syscall
	j fimse

	
	li $v0, 4
	la $a0, msg11
	syscall
	fimse: