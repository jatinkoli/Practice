
    var mapcode;
    var diag;
    function initialize() {
        mapcode = new google.maps.Geocoder(); 
        var lnt = new google.maps.LatLng(26.45, 82.85);
        var diagChoice = {
            zoom: 9,
            center: lnt, 
            diagId: google.maps.MapTypeId.ROADMAP
        }
        diag = new google.maps.Map(document.getElementById('map-canvas'), diagChoice); 
    }
    function codeAddress() {
        var add = document.getElementById('address').value;
        mapcode.geocode({ 'address': add }, function (results, status) {
            if (status == google.maps.GeocoderStatus.OK) { 
                diag.setCenter(results[0].geometry.location); 
                var hint = new google.maps.Marker({ 
                    diag: diag,
                    position: results[0].geometry.location
                });
            } else {
                alert('This code is not successful ' + status);
            }
        });
    }
    google.maps.event.addDomListener(window, 'load', initialize); 
