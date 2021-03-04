	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"main.c"
	.text
	.align	2
	.global	goToStart
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToStart, %function
goToStart:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #67108864
	mov	r2, #5632
	push	{r4, r5, r6, lr}
	ldr	r4, .L9
	strh	r2, [r3]	@ movhi
	ldr	r3, [r4]
	cmp	r3, #0
	beq	.L7
.L2:
	mov	r3, #0
	ldr	r2, .L9+4
	ldr	r2, [r2]
	cmp	r2, r3
	str	r3, [r4]
	bne	.L8
	mov	r3, #1184
	ldr	r2, .L9+8
	ldr	r1, .L9+12
	mov	r0, #3
	ldr	r4, .L9+16
	mov	lr, pc
	bx	r4
	mov	r3, #2048
	ldr	r2, .L9+20
	ldr	r1, .L9+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L9+28
	mov	r0, #3
	mov	lr, pc
	bx	r4
.L4:
	ldr	r3, .L9+32
	ldr	r2, .L9+36
	ldr	r1, .L9+40
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #2048
	ldr	r2, .L9+44
	ldr	r1, .L9+48
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	ldr	r1, .L9+52
	mov	r3, #256
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L9+56
	mov	lr, pc
	bx	r3
	mov	r3, #0
	mov	r1, #67108864
	ldr	r2, .L9+60
	strh	r3, [r1, #20]	@ movhi
	pop	{r4, r5, r6, lr}
	str	r3, [r2]
	bx	lr
.L8:
	ldr	r4, .L9+16
	mov	r3, #1280
	ldr	r2, .L9+8
	ldr	r1, .L9+64
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #2048
	ldr	r2, .L9+20
	ldr	r1, .L9+68
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L9+72
	mov	r0, #3
	mov	lr, pc
	bx	r4
	b	.L4
.L7:
	mov	r3, #1
	ldr	r2, .L9+76
	ldr	r1, .L9+80
	ldr	r0, .L9+84
	ldr	r5, .L9+88
	mov	lr, pc
	bx	r5
	b	.L2
.L10:
	.align	2
.L9:
	.word	dontplay
	.word	cheat
	.word	100679680
	.word	startscreen1Tiles
	.word	DMANow
	.word	100724736
	.word	startscreen1Map
	.word	startscreen1Pal
	.word	10544
	.word	100696064
	.word	startscreen2Tiles
	.word	100720640
	.word	startscreen2Map
	.word	startscreen2Pal
	.word	hideSprites
	.word	state
	.word	startscreen3Tiles
	.word	startscreen3Map
	.word	startscreen3Pal
	.word	11025
	.word	1786176
	.word	startsound
	.word	playSoundA
	.size	goToStart, .-goToStart
	.align	2
	.global	initialize
	.syntax unified
	.arm
	.fpu softvfp
	.type	initialize, %function
initialize:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	mov	r3, #8064
	mov	r4, #67108864
	ldr	r2, .L13
	ldr	r1, .L13+4
	strh	r3, [r4, #8]	@ movhi
	strh	r1, [r4, #10]	@ movhi
	ldr	r3, .L13+8
	strh	r2, [r4, #12]	@ movhi
	mov	lr, pc
	bx	r3
	mov	r3, #4352
	mov	r5, #0
	strh	r3, [r4]	@ movhi
	ldr	r3, .L13+12
	mov	lr, pc
	bx	r3
	ldr	r3, .L13+16
	mov	lr, pc
	bx	r3
	ldr	r3, .L13+20
	str	r5, [r3]
	bl	goToStart
	ldr	r2, .L13+24
	ldr	r3, .L13+28
	str	r5, [r2]
	str	r5, [r3]
	pop	{r4, r5, r6, lr}
	bx	lr
.L14:
	.align	2
.L13:
	.word	23560
	.word	24068
	.word	hideSprites
	.word	setupSounds
	.word	setupInterrupts
	.word	cheat
	.word	startHOff
	.word	dontplay
	.size	initialize, .-initialize
	.align	2
	.global	instructions
	.syntax unified
	.arm
	.fpu softvfp
	.type	instructions, %function
instructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L22
	ldrh	r3, [r3]
	tst	r3, #2
	push	{r4, r5, r6, lr}
	beq	.L16
	ldr	r3, .L22+4
	ldrh	r3, [r3]
	tst	r3, #2
	beq	.L21
.L16:
	mov	r0, #67108864
	ldr	r1, .L22+8
	ldr	r2, [r1]
	ldr	r3, .L22+12
	add	r2, r2, #1
	smull	r4, r5, r2, r3
	asr	r3, r2, #31
	rsb	r3, r3, r5, asr #7
	lsl	r3, r3, #16
	lsr	r3, r3, #16
	str	r2, [r1]
	pop	{r4, r5, r6, lr}
	strh	r3, [r0, #24]	@ movhi
	bx	lr
.L21:
	mov	r2, #1
	ldr	r3, .L22+16
	str	r2, [r3]
	bl	goToStart
	b	.L16
.L23:
	.align	2
.L22:
	.word	oldButtons
	.word	buttons
	.word	startHOff
	.word	274877907
	.word	dontplay
	.size	instructions, .-instructions
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	win.part.0, %function
win.part.0:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L26
	ldrh	r3, [r3]
	tst	r3, #8
	bxne	lr
	mov	r2, #1
	ldr	r3, .L26+4
	str	r2, [r3]
	b	goToStart
.L27:
	.align	2
.L26:
	.word	buttons
	.word	dontplay
	.size	win.part.0, .-win.part.0
	.align	2
	.global	win
	.syntax unified
	.arm
	.fpu softvfp
	.type	win, %function
win:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L30
	ldrh	r3, [r3]
	tst	r3, #8
	bxeq	lr
	b	win.part.0
.L31:
	.align	2
.L30:
	.word	oldButtons
	.size	win, .-win
	.align	2
	.global	lose
	.syntax unified
	.arm
	.fpu softvfp
	.type	lose, %function
lose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L37
	ldrh	r3, [r3]
	tst	r3, #8
	bxeq	lr
	ldr	r3, .L37+4
	ldrh	r3, [r3]
	tst	r3, #8
	bxne	lr
	b	goToStart
.L38:
	.align	2
.L37:
	.word	oldButtons
	.word	buttons
	.size	lose, .-lose
	.align	2
	.global	goToInstructions
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToInstructions, %function
goToInstructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #67108864
	mov	r1, #5632
	push	{r4, lr}
	mov	r3, #1776
	ldr	r4, .L41
	strh	r1, [r2]	@ movhi
	mov	r0, #3
	ldr	r2, .L41+4
	ldr	r1, .L41+8
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L41+12
	ldr	r1, .L41+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	mov	r3, #256
	ldr	r1, .L41+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L41+24
	mov	lr, pc
	bx	r3
	mov	r2, #1
	ldr	r3, .L41+28
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L42:
	.align	2
.L41:
	.word	DMANow
	.word	100679680
	.word	instructionstextTiles
	.word	100724736
	.word	instructionstextMap
	.word	instructionstextPal
	.word	hideSprites
	.word	state
	.size	goToInstructions, .-goToInstructions
	.align	2
	.global	goToGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToGame, %function
goToGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #67108864
	mov	r2, #5632
	push	{r4, r5, r6, lr}
	ldr	r4, .L50
	strh	r2, [r3]	@ movhi
	ldr	r3, [r4]
	cmp	r3, #0
	beq	.L48
.L44:
	mov	r3, #0
	ldr	r2, .L50+4
	ldr	r2, [r2]
	cmp	r2, r3
	str	r3, [r4]
	ldr	r2, .L50+8
	mov	r3, #256
	beq	.L49
	ldr	r1, .L50+12
	mov	r0, #3
	ldr	r4, .L50+16
	mov	lr, pc
	bx	r4
	mov	r3, #16384
	ldr	r2, .L50+20
	ldr	r1, .L50+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
.L46:
	ldr	r3, .L50+28
	ldr	r2, .L50+32
	ldr	r1, .L50+36
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #2048
	ldr	r2, .L50+40
	ldr	r1, .L50+44
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L50+48
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #2528
	ldr	r2, .L50+52
	ldr	r1, .L50+56
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #2048
	ldr	r2, .L50+60
	ldr	r1, .L50+64
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L50+68
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #2
	ldr	r3, .L50+72
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L49:
	ldr	r1, .L50+76
	mov	r0, #3
	ldr	r4, .L50+16
	mov	lr, pc
	bx	r4
	mov	r3, #16384
	ldr	r2, .L50+20
	ldr	r1, .L50+80
	mov	r0, #3
	mov	lr, pc
	bx	r4
	b	.L46
.L48:
	mov	r3, #1
	ldr	r2, .L50+84
	ldr	r1, .L50+88
	ldr	r0, .L50+92
	ldr	r5, .L50+96
	mov	lr, pc
	bx	r5
	b	.L44
.L51:
	.align	2
.L50:
	.word	dontplay
	.word	cheat
	.word	83886592
	.word	spritesheet4Pal
	.word	DMANow
	.word	100728832
	.word	spritesheet4Tiles
	.word	6160
	.word	100679680
	.word	bg1Tiles
	.word	100724736
	.word	bg1Map
	.word	bg1Pal
	.word	100696064
	.word	bg2Tiles
	.word	100720640
	.word	bg2Map
	.word	bg2Pal
	.word	state
	.word	spritesheet1Pal
	.word	spritesheet1Tiles
	.word	11025
	.word	398880
	.word	fightsound
	.word	playSoundA
	.size	goToGame, .-goToGame
	.align	2
	.global	start
	.syntax unified
	.arm
	.fpu softvfp
	.type	start, %function
start:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r4, .L70
	ldrh	r3, [r4]
	tst	r3, #8
	beq	.L53
	ldr	r2, .L70+4
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L67
.L53:
	tst	r3, #2
	beq	.L54
	ldr	r2, .L70+4
	ldrh	r2, [r2]
	tst	r2, #2
	beq	.L68
.L54:
	tst	r3, #64
	beq	.L55
	ldr	r3, .L70+4
	ldrh	r3, [r3]
	ands	ip, r3, #64
	bne	.L55
	ldr	lr, .L70+8
	ldr	r3, [lr]
	cmp	r3, #0
	beq	.L69
	mov	r3, #1184
	ldr	r2, .L70+12
	ldr	r1, .L70+16
	mov	r0, #3
	ldr	r4, .L70+20
	str	ip, [lr]
	mov	lr, pc
	bx	r4
	mov	r3, #2048
	ldr	r2, .L70+24
	ldr	r1, .L70+28
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L70+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
.L55:
	mov	r0, #67108864
	ldr	r1, .L70+36
	ldr	r2, [r1]
	ldr	r3, .L70+40
	add	r2, r2, #1
	smull	r4, r5, r2, r3
	asr	r3, r2, #31
	rsb	r3, r3, r5, asr #7
	lsl	r3, r3, #16
	lsr	r3, r3, #16
	str	r2, [r1]
	pop	{r4, r5, r6, lr}
	strh	r3, [r0, #24]	@ movhi
	bx	lr
.L68:
	bl	goToInstructions
	ldrh	r3, [r4]
	b	.L54
.L67:
	ldr	r3, .L70+44
	mov	lr, pc
	bx	r3
	bl	goToGame
	ldrh	r3, [r4]
	b	.L53
.L69:
	mov	ip, #1
	ldr	r4, .L70+20
	mov	r3, #1280
	ldr	r2, .L70+12
	ldr	r1, .L70+48
	mov	r0, #3
	str	ip, [lr]
	mov	lr, pc
	bx	r4
	mov	r3, #2048
	ldr	r2, .L70+24
	ldr	r1, .L70+52
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L70+56
	mov	r0, #3
	mov	lr, pc
	bx	r4
	b	.L55
.L71:
	.align	2
.L70:
	.word	oldButtons
	.word	buttons
	.word	cheat
	.word	100679680
	.word	startscreen1Tiles
	.word	DMANow
	.word	100724736
	.word	startscreen1Map
	.word	startscreen1Pal
	.word	startHOff
	.word	274877907
	.word	initGame
	.word	startscreen3Tiles
	.word	startscreen3Map
	.word	startscreen3Pal
	.size	start, .-start
	.align	2
	.global	pause
	.syntax unified
	.arm
	.fpu softvfp
	.type	pause, %function
pause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r4, .L84
	ldrh	r3, [r4]
	tst	r3, #8
	beq	.L73
	ldr	r2, .L84+4
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L82
.L73:
	tst	r3, #4
	beq	.L72
	ldr	r3, .L84+4
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L83
.L72:
	pop	{r4, lr}
	bx	lr
.L83:
	pop	{r4, lr}
	b	goToStart
.L82:
	bl	goToGame
	mov	r1, #1
	ldr	r2, .L84+8
	ldrh	r3, [r4]
	str	r1, [r2]
	b	.L73
.L85:
	.align	2
.L84:
	.word	oldButtons
	.word	buttons
	.word	dontplay
	.size	pause, .-pause
	.align	2
	.global	goToPause
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToPause, %function
goToPause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #67108864
	mov	r1, #4352
	mov	r2, #0
	push	{r4, lr}
	mov	r0, #3
	ldr	r4, .L88
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #16]	@ movhi
	ldr	r1, .L88+4
	ldr	r3, .L88+8
	mov	r2, #100663296
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L88+12
	ldr	r1, .L88+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	mov	r3, #256
	ldr	r1, .L88+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L88+24
	mov	lr, pc
	bx	r3
	mov	r2, #3
	ldr	r3, .L88+28
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L89:
	.align	2
.L88:
	.word	DMANow
	.word	pausescreenTiles
	.word	18560
	.word	100726784
	.word	pausescreenMap
	.word	pausescreenPal
	.word	hideSprites
	.word	state
	.size	goToPause, .-goToPause
	.align	2
	.global	goToWin
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToWin, %function
goToWin:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #67108864
	mov	r2, #4352
	push	{r4, r5, r6, lr}
	ldr	r4, .L93
	strh	r2, [r3]	@ movhi
	ldr	r3, [r4]
	cmp	r3, #0
	bne	.L91
	mov	r3, #1
	ldr	r2, .L93+4
	ldr	r1, .L93+8
	ldr	r0, .L93+12
	ldr	r5, .L93+16
	mov	lr, pc
	bx	r5
.L91:
	mov	r2, #0
	mov	r1, #67108864
	str	r2, [r4]
	ldr	r3, .L93+20
	ldr	r4, .L93+24
	strh	r2, [r1, #16]	@ movhi
	mov	r0, #3
	mov	r2, #100663296
	ldr	r1, .L93+28
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L93+32
	ldr	r1, .L93+36
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	mov	r3, #256
	ldr	r1, .L93+40
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L93+44
	mov	lr, pc
	bx	r3
	mov	r2, #4
	ldr	r3, .L93+48
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L94:
	.align	2
.L93:
	.word	dontplay
	.word	11025
	.word	1786176
	.word	startsound
	.word	playSoundA
	.word	19104
	.word	DMANow
	.word	winscreenTiles
	.word	100726784
	.word	winscreenMap
	.word	winscreenPal
	.word	hideSprites
	.word	state
	.size	goToWin, .-goToWin
	.align	2
	.global	goToLose
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLose, %function
goToLose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #67108864
	mov	r1, #4352
	mov	r2, #0
	push	{r4, lr}
	mov	r0, #3
	ldr	r4, .L97
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #16]	@ movhi
	ldr	r1, .L97+4
	ldr	r3, .L97+8
	mov	r2, #100663296
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L97+12
	ldr	r1, .L97+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #83886080
	mov	r3, #256
	ldr	r1, .L97+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L97+24
	mov	lr, pc
	bx	r3
	mov	r2, #5
	ldr	r3, .L97+28
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L98:
	.align	2
.L97:
	.word	DMANow
	.word	losescreenTiles
	.word	18816
	.word	100726784
	.word	losescreenMap
	.word	losescreenPal
	.word	hideSprites
	.word	state
	.size	goToLose, .-goToLose
	.align	2
	.global	game
	.syntax unified
	.arm
	.fpu softvfp
	.type	game, %function
game:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L120
	mov	lr, pc
	bx	r3
	ldr	r4, .L120+4
	ldr	r3, .L120+8
	mov	lr, pc
	bx	r3
	ldr	r3, .L120+12
	mov	lr, pc
	bx	r3
	ldrh	r3, [r4]
	tst	r3, #8
	beq	.L100
	ldr	r2, .L120+16
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L115
.L100:
	tst	r3, #512
	beq	.L101
	ldr	r2, .L120+16
	ldrh	r2, [r2]
	tst	r2, #512
	beq	.L116
.L101:
	tst	r3, #256
	beq	.L102
	ldr	r3, .L120+16
	ldrh	r3, [r3]
	tst	r3, #256
	beq	.L117
.L102:
	ldr	r3, .L120+20
	ldr	r3, [r3]
	cmp	r3, #1
	beq	.L118
.L103:
	ldr	r3, .L120+24
	ldr	r3, [r3]
	cmp	r3, #1
	beq	.L119
	pop	{r4, lr}
	bx	lr
.L119:
	pop	{r4, lr}
	b	goToLose
.L118:
	bl	goToWin
	b	.L103
.L117:
	bl	goToWin
	b	.L102
.L115:
	bl	goToPause
	ldrh	r3, [r4]
	b	.L100
.L116:
	bl	goToLose
	ldrh	r3, [r4]
	b	.L101
.L121:
	.align	2
.L120:
	.word	updateGame
	.word	oldButtons
	.word	drawGame
	.word	waitForVBlank
	.word	buttons
	.word	winner
	.word	loser
	.size	game, .-game
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ Function supports interworking.
	@ Volatile: function does not return.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r7, fp, lr}
	ldr	r3, .L139
	mov	lr, pc
	bx	r3
	ldr	r10, .L139+4
	ldr	r5, .L139+8
	ldr	fp, .L139+12
	ldr	r9, .L139+16
	ldr	r8, .L139+20
	ldr	r7, .L139+24
	ldr	r6, .L139+28
	ldr	r4, .L139+32
.L123:
	ldrh	ip, [r10]
	strh	ip, [r5]	@ movhi
	ldr	r0, [fp]
	ldrh	r3, [r4, #48]
	strh	r3, [r10]	@ movhi
	cmp	r0, #5
	ldrls	pc, [pc, r0, asl #2]
	b	.L123
.L126:
	.word	.L125
	.word	.L127
	.word	.L128
	.word	.L129
	.word	.L130
	.word	.L131
.L131:
	tst	ip, #8
	beq	.L123
	tst	r3, #8
	bne	.L123
	ldr	r3, .L139+36
	mov	lr, pc
	bx	r3
	b	.L123
.L130:
	tst	ip, #8
	beq	.L123
	ldr	r3, .L139+40
	mov	lr, pc
	bx	r3
	b	.L123
.L129:
	mov	lr, pc
	bx	r6
	b	.L123
.L127:
	mov	lr, pc
	bx	r8
	b	.L123
.L125:
	mov	lr, pc
	bx	r9
	b	.L123
.L128:
	mov	lr, pc
	bx	r7
	b	.L123
.L140:
	.align	2
.L139:
	.word	initialize
	.word	buttons
	.word	oldButtons
	.word	state
	.word	start
	.word	instructions
	.word	game
	.word	pause
	.word	67109120
	.word	goToStart
	.word	win.part.0
	.size	main, .-main
	.comm	dontplay,4,4
	.comm	startHOff,4,4
	.comm	state,4,4
	.comm	oldButtons,2,2
	.comm	buttons,2,2
	.comm	soundB,32,4
	.comm	soundA,32,4
	.comm	cheat,4,4
	.comm	loser,4,4
	.comm	winner,4,4
	.ident	"GCC: (devkitARM release 47) 7.1.0"
