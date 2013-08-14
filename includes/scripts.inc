<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.6.2/jquery.min.js"></script>

			<script>
				
			$(function(){
				$("#btn_beneficios").hover(function(){

					$("#beneficiosNav").fadeIn("slow");
					$(this).css("background","white")

				})

				$("#btn_fundacion").hover(function(){
					$("#beneficiosNav").fadeOut("slow");
				})
				$("#btn_trabajo").hover(function(){
					$("#beneficiosNav").fadeOut("slow");
				})

				
				$("#beneficiosNav").mouseleave(function(){
					$(this).fadeOut("slow")
					$("#btn_beneficios").attr("style","");
				})


			})

					
			</script>