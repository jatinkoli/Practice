let audioIN = { audio: true };

	navigator.mediaDevices.getUserMedia(audioIN)


	.then(function (mediaStreamObj) {


		let audio = document.querySelector('audio');


		if ("srcObject" in audio) {
		audio.srcObject = mediaStreamObj;
		}
		else {
		audio.src = window.URL
			.createObjectURL(mediaStreamObj);
		}

		audio.onloadedmetadata = function (ev) {

		audio.play();
		};


		let start = document.getElementById('btnStart');


		let stop = document.getElementById('btnStop');


		let playAudio = document.getElementById('adioPlay');

		let mediaRecorder = new MediaRecorder(mediaStreamObj);



		start.addEventListener('click', function (ev) {
		mediaRecorder.start();
		})


		stop.addEventListener('click', function (ev) {
		mediaRecorder.stop();
		});
		mediaRecorder.ondataavailable = function (ev) {
		dataArray.push(ev.data);
		}
		let dataArray = [];
		mediaRecorder.onstop = function (ev) {
		let audioData = new Blob(dataArray,
					{ 'type': 'audio/mp3;' });
		dataArray = [];
		let audioSrc = window.URL
			.createObjectURL(audioData);
		playAudio.src = audioSrc;
		}
	})
	.catch(function (err) {
		console.log(err.name, err.message);
	});